//
//  whileloops.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 1/29/26.
//

#include <iostream>
using namespace std;

void whileandif() {

    // -------------------------
    // Loop Basics (Counting)
    // -------------------------
    cout << "Counting from 1 to 10\n";

    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << "\n\n";


    // -------------------------
    // Accumulator Pattern (Sum)
    // -------------------------
    cout << "Sum of 5 integers\n";

    int sum = 0;
    int value;
    int count = 0;

    while (count < 5) {
        cout << "Enter an integer: ";
        cin >> value;

        sum += value;
        count++;
    }

    cout << "Sum: " << sum << "\n\n";


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
}
