//
//  char_array.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/26/26.
//

#include <iostream>
using namespace std;



void c_string_stack_buffer_overflow()
{
//    char word[6] = "Hello";
//
//    for (int i = 0; i < 6; i++) {
//        cout << (int)word[i] << " ";
//    }
//    
    // char name[5] = "Hello";   // ERROR: needs 6, has only 5
    
    // C++20 will not have problem, but older systems will overflow buffer.
    char name[10];
    cout << "Enter your name: ";
    cin >> name;
    cout << "You entered: " << name << endl;
    cout << "Null Characters Automatically inserted at postition 9: " << (int)name[9] << endl;
    
    string leftover;
    cin >> leftover;
    cout << "Leftover in buffer: " << leftover;
    
    char name_safe[10];
    // A frequent issue arises when mixing cin >> (which is used for single words or numbers) with getline(). The >> operator leaves the trailing newline character (\n) in the input buffer, which the subsequent getline() immediately reads as an "empty" line, causing it to skip the input prompt.
    // Clear the newline character left in the buffer by cin >> leftover
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Use cin.ignore()

    // safe in all systems to limit reading the number characters that will fit.
    cout << "Enter your name, no matter how long: ";

    cin.getline(name_safe, 10);
    cout << "You entered: " << name_safe << endl;
    
    string leftover_safe;
    cin >> leftover_safe;
    cout << "Leftover in buffer: " << leftover;
}


void c_string_stack_no_null()
{
    char str[5];
    

    // file the adjacent memory with some values, forgot to clear
    for (int i = 2; i < 10; i++) {
        str[i] = 'X';
    }
    
    // The actual intended word is "Hi"
    str[0] = 'H';
    str[1] = 'i';
    
    cout << str;
}

void c_string_heap_no_null() {
    int length;
    cout<< "Enter desired string length: ";
    cin >> length;

    char* s = new char[length + 1];  // +1 for '\0'
    
    // Freshly Zeroed Memory
    cout<< "Your string before intialization: "<< s<< endl;

    cout<< "Enter "<< length<< " characters (no spaces): ";
    for (int i = 0; i < length; i++) {
        cin >> s[i];
    }
    

    /* Experiment: Comment this out and see.
     Because it worked this time, you have a latent bug. If you put this code into a larger project:
    It might work fine today.
    Tomorrow, it might print your name followed by 50 random characters.
    Next week, it might cause a Segmentation Fault (crash) because cout tried to read memory
     it wasn't allowed to access while searching for a zero.
     In C++, "nothing happened" is often the most dangerous result of a bug, because it hides the fact that the code is technically broken. Always include that \0!
     Same with stack also.
     */
    
    s[length] = '\0';              // null terminator

    /*
    for (int i = length; i < length+10; i++) {
        s[i] = 'X';
    }*/
    
    cout<< "Your string after initialization: "<< s<< endl;

    delete[] s;
}
