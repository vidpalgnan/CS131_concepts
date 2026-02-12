//
//  for_random.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 1/30/26.
//

#include <cstdlib>
#include <ctime>
#include <iostream>
#if defined(_WIN32)
#include <windows.h>
#elif defined(__unix__) || defined(__APPLE__)
#include <unistd.h>
#else
#error "Unsupported platform"
#endif

using namespace std;

void singleforloop() {
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
    // for(initialization;condition(beginning of every
    // iteration);changeofstate(end of every iteration)) for (int i = 0; i < 2
    // ; i++)

    for (; cout << "Checking condition is (i < 2)?" << endl && i < 2;
         cout << "Increment i to: " << ++i << endl) {
        cout << "Yes, so start of iteration when i is: " << i << endl;
        cout << "Some operation involving i" << endl;
        cout << "End of iteration when i is: " << i << endl << endl;
    }

    cout << "No, Exited loop, PLEASE NOTE i is now: " << i << endl;
}

void whileandfor() {
    srand(static_cast<unsigned>(time(nullptr))); // seed once

    const int ITERATIONS = 20;
    const int WAIT_TIME_MILLISECS = 2000;

    bool got = false;
    // polling for some state change
    for (int i = 0; i < ITERATIONS; i++) {
        cout << "Checking whether the message recieved" << endl;
        int r = std::rand() % 100; // 0..99
        bool arrived = (r < 30);   // ~30% chance of true

        if (!arrived) {
            cout << "Not yet, we will wait for sometime and check again"
                 << endl;

#if defined(_WIN32)
            Sleep(WAIT_TIME_MILLISECS);
#elif defined(__unix__) || defined(__APPLE__)
            sleep(WAIT_TIME_MILLISECS / 1000);
#else
#error "Unsupported platform"
#endif
        } else {
            cout << "Got it!" << endl;
            got = true;
            break;
        }
    }

    if (got) {
        cout << "we exited and got!" << endl;
    } else {
        cout << "we exited, but we did not get!" << endl;
    }

    // polling for some state change using while
    // same thing with while
    // which is better?
}

void for_withuserinput()
{
    int num;

    cout << "Enter numbers (do while loop), to exit -1:" << endl;

    do
    {
        cin >> num;
        cout << "You entered:" << num << endl;
        cout << "Enter numbers (do while loop), to exit -1:" << endl;
    } while (num != -1);

    
    cout << "Enter numbers (while loop), to exit -1:" << endl;
    cin >> num;

    while (num != -1)
    {
        cout << "You entered:" << num << endl;
        cout << "Enter numbers (while loop), to exit -1:" << endl;
        cin >> num;
    }

    cout << "Enter numbers (for loop), to exit -1:" << endl;
    cin >> num;

    for (; num != -1;)
    {
        cout << "You entered:" << num << endl;
        cout << "Enter numbers (for loop), to exit -1:" << endl;

        cin >> num;
    }
}

void array_random() {
    // srand(static_cast<unsigned>(time(nullptr))); // seed once
    // int r = rand() % 100; // 0..99

    const int SIZE = 20;
    int nums[SIZE];

    cout << "Printing" << endl;

    // printing
    for (int i = 0; i < SIZE; i++) {
        std::cout << nums[i] << "\t";
    }
    
    cout << "Generating random" << endl;
    // storing and printing
    for (int i = 0; i < SIZE; i++) {
        nums[i] = rand() % 100; // 0..99
        std::cout << nums[i] << "\t";
    }
    cout << "Printing" << endl;

    std::cout << std::endl;
    // printing
    for (int i = 0; i < SIZE; i++) {
        std::cout << nums[i] << "\t";
    }
}

void fibbonocci()
{
    // 1 1 2 3 5 8
    const int SIZE = 20;
    int fib[SIZE];
    
    fib[0] = 1;
    fib[1] = 1;
    

    for(int i = 2;i < SIZE;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    // printing
    for (int i = 0; i < SIZE; i++) {
        std::cout << fib[i] << "\t";
    }
    
}

void nestedfor() {
    //
    //    for (int i = 0;i < 2; i++) {
    //        cout << "Yes, so start of iteration when i is: " << i << endl;
    //        cout << "End of iteration when i is: " << i << endl << endl;
    //    }
    //
    //    int i = 0;
    //    cout << "Before loop, i is: " << i << endl;
    //
    //    for (;cout<< "Checking condition is (i < 2)?" <<endl && i < 2; cout <<
    //    "Increment i to: " << ++i <<endl ) {
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
