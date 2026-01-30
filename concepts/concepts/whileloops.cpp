//
//  whileloops.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 1/29/26.
//

#include <iostream>
using namespace std;

void whileandif() {

    /*
     
    // -------------------------
    // Loop Basics (Counting)
    // -------------------------
    cout << "Counting from 1 to 5\n";

    int count = 1;

    while (count < 5) {
       cout << count << endl;
       count++;  // changes the state so the loop can end
    }

    cout << "\n\n";
     
    
     // -------------------------
     // Accumulator simple (Sum)
     // -------------------------
     
    int total = 0;

//    total = total + 5;
//    total = total + 3;
//    total = total + 2;
    // total = 10

    total += 5;
    total += 3;
    total += 2;

    cout << total << endl;   // prints 10
     

    
    // -------------------------
    // Accumulator Pattern (Sum)
    // -------------------------
    cout << "Sum of 5 integers\n";

    int sum = 0;
    int value;
    int count = 0;
    // count 0,1,2,3,4
    while (count < 5) {
        cout << "Enter an integer: ";
        cin >> value;

        sum += value;
        count++;
    }

    cout << "Sum: " << sum << "\n\n";

     
    int a = 30;
    int b = 400;
    int c = 500;
    
    int maxVal = a;

    if (b > maxVal) {
        maxVal = b;
    }
    
    if (c > maxVal) {
        maxVal = c;
    }

    cout << maxVal << endl;



    // -------------------------
    // Counting with a Condition
    // -------------------------
    cout << "Count positive numbers\n";

    int positiveCount = 0;
    sum = 0;
    count = 0;

    while (count < 5) {
        cout << "Enter an integer: ";
        cin >> value;

        sum += value;

        if (value > 0) {
            positiveCount++;
        }

        count++;
    }

    cout << "Positive values: " << positiveCount << "\n";
    cout << "Sum: " << sum << "\n\n";
*/

    
    int value;
    int count;
    // -------------------------
    // Finding max
    // -------------------------
    cout << "Finding maximum of numbers\n";

    // Read the first value to initialize max
    cout << "Enter a number: ";
    cin >> value;
    count = 0;
    int maxValue = value;

    // Read 4 more numbers
    count = 1;
    while (count < 5) {
        cout << "Enter a number: ";
        cin >> value;

        if (value > maxValue) {
            maxValue = value;
        }

        count++;
    }

    cout << "Maximum value: " << maxValue << "\n\n";

    /*
    // -------------------------
    // All patterns together
    // -------------------------
    cout << "Count, Sum, and Maximum\n";
    cout << "Enter 5 integers:\n";

    // int maxValue;

    // Step A — read first value
    cin >> value;
    sum = value;
    maxValue = value;
    positiveCount = 0;

    if (value > 0) {
        positiveCount = 1;
        // or positiveCount++;
    }
    
    // Step B — remaining 4 values
    count = 1;
    while (count < 5) {
        cin >> value;

        sum += value;

        if (value > 0) {
            positiveCount++;
        }

        if (value > maxValue) {
            maxValue = value;
        }

        count++;
    }

    // Step C — print results
    cout << "\nResults:\n";
    cout << "positives(count): " << positiveCount << "\n";
    cout << "sum: " << sum << "\n";
    cout << "max: " << maxValue << "\n";
    
    */
}
