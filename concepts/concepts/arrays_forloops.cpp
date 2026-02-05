//
//  for_random.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 1/30/26.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void singleforloop()
{
    /*
    // For loop
    cout << "Beginning loop" << endl;
    int i = 0;
    for (; i < 2; i++) {
        cout << "Start of iteration when i is: " << i << endl;
        cout << "Some operation involving i" <<endl;
        cout << "End of iteration when i is: " << i << endl << endl;
    }
    
    cout << "Exited loop" << endl << endl;
    cout << "i value " << i << endl;
    */
     
    
    // For loop break apart
    cout << "Let's break for loop to its parts" << endl;

    int i = 0;
    cout << "Before loop, i is: " << i << endl;
    // for(initialization;condition(beginning of every iteration);changeofstate(end of every iteration))
    // for (int i = 0; i < 2    ; i++)

    for (;cout<< "Checking condition is (i < 2)?" <<endl && i < 2; cout << "Increment i to: " << ++i <<endl ) {
        cout << "Yes, so start of iteration when i is: " << i << endl;
        cout << "Some operation involving i" <<endl;
        cout << "End of iteration when i is: " << i << endl << endl;
    }
    
    cout << "No, Exited loop, PLEASE NOTE i is now: " << i << endl;

}

void array_random()
{
    //srand(static_cast<unsigned>(time(nullptr))); // seed once
    //int r = rand() % 100; // 0..99

    const int SIZE = 20;
    int nums[SIZE];

    // storing and printing
    for (int i = 0; i < SIZE; i++) {
        nums[i] = rand() % 100; // 0..99
        std::cout << nums[i] << "\t";
    }
    
    std:: cout << std::endl;
    // printing
    for (int i = 0; i < SIZE; i++) {
        std::cout << nums[i] << "\t";
    }
}


void nestedfor()
{
//    
//    for (int i = 0;i < 2; i++) {
//        cout << "Yes, so start of iteration when i is: " << i << endl;
//        cout << "End of iteration when i is: " << i << endl << endl;
//    }
//    
//    int i = 0;
//    cout << "Before loop, i is: " << i << endl;
//
//    for (;cout<< "Checking condition is (i < 2)?" <<endl && i < 2; cout << "Increment i to: " << ++i <<endl ) {
//        cout << "Yes, so start of iteration when i is: " << i << endl;
//        cout << "End of iteration when i is: " << i << endl << endl;
//    }
//    
//    cout << "No, Exited loop, i is now: " << i << endl;
//
//    int j = 0;
//    for (;j < 3; cout << j++) {
//        // cout << "(" << i << "," << j << ") ";
//    }
//    cout << "\n";
}
