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
    char word[6] = "Hello";

    for (int i = 0; i < 6; i++) {
        cout << (int)word[i] << " ";
    }
    
    // char name[5] = "Hello";   // ERROR: needs 6, has only 5
    
    char name[10];
    cout << "Enter your name: ";
    cin >> name;
    cout << "You entered: " << name << endl;
    cout << (int)name[9];
    string leftover;
    cin >> leftover;
    cout << "Leftover in buffer: " << leftover;
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
