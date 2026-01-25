//
//  stream_manipulators.cpp
//
//  Created by Vidhya Gnanam on 1/24/26.
//
#include <iomanip>
#include <iostream>
using namespace std;

void stream_manipulators() {
   //  cout << "Hello World" << endl;
    cout << "Welcome to the world of printing floating point numbers!" << endl;
    
    
    cout << "**********************************************************************" << endl;
    cout << "Default output of floating point (with default 6 significant digits): " << endl;
    // default is std::setprecision(6);

    // Default output is going to try and fit everything in upto 6 significant digits.
    // significant digits: total number of digits displayed both before and after the decimal point.
    // If your number has more than six digits, C++ rounds the sixth digit based on the seventh
    double x = 343.1665946234;
    cout << "default (x): " << x << endl;

    // If your number has more than six digits, C++ rounds the sixth digit based on the seventh
    double y = 343223.6789;
    cout << "default (y): " << y << endl;
    
    // If the number is too large to fit in six digits, C++ will automatically switch to
    // scientific notation (e.g., 1.23457e+06) to keep the output within the 6-digit limit.
    double z = 3432456.1665946234;
    cout << "default (z): " << z << endl;
    
    // If a number can be expressed accurately with fewer than six digits (e.g., 1.2), it will not add extra zeros (it won't show 1.20000).
    double p = 1.2;
    cout << "default (p): " << p << endl;


    cout << "**********************************************************************" << endl;

    // std::setprecision(4): Sets the total number of significant digits to be displayed.
    cout << "Default output of floating point (with 4 significant digits): " << endl;
    cout << setprecision(4);
    
    // Default output is going to try and fit everything in upto 4 significant digits.
    // double x = 343.1665946234;
    // If your number has more than 4 digits, C++ rounds the 4th digit based on the 5th
    cout << "default (x): " << x << endl;

    // double y = 343223.6789;
    cout << "default (y): " << y << endl;
    
    // If the number is too large to fit in 4 digits, C++ will automatically switch to
    // scientific notation (e.g., 1.23457e+06) to keep the output within the 4-digit limit.
    // double z = 3432456.1665946234;
    cout << "default (z): " << z << endl;
    
    // If a number can be expressed accurately with fewer than 4 digits (e.g., 1.2), it will not add extra zeros.
    // double p = 1.2;
    cout << "default (p): " << p << endl;
    
    
    cout << "**********************************************************************" << endl;

    cout << "Fixed output of floating point (with 6 digits after the decimal point): " << endl;
    // Prevents scientific notation; numbers are always written in standard decimal form (e.g., 1234567.00)
    // setprecision(n) sets the exact number of digits after the decimal point
    // Always shows exactly n decimal places, even if they are zeros (e.g., 1.2 with setprecision(6) displays as 1.200000)
    cout << fixed;
    // supposed to be default
    cout << setprecision(6);

    // double x = 343.1665946234;
    cout << "fixed (x): " << x << endl;

    // double y = 343223.6789;
    cout << "fixed (y): " << y << endl;
    
    // double z = 3432456.1665946234;
    cout << "fixed (z): " << z << endl;
    
    // double p = 1.2;
    cout << "fixed (p): " << p << endl;
    
    
    cout << "**********************************************************************" << endl;

    cout << "Fixed output of floating point (with 4 digits after the decimal point): " << endl;
    // Prevents scientific notation; numbers are always written in standard decimal form (e.g., 1234567.00)
    // setprecision(n) sets the exact number of digits after the decimal point
    // Always shows exactly n decimal places, even if they are zeros (e.g., 1.2 with setprecision(6) displays as 1.200000)
    cout << fixed;
    cout << setprecision(4);

    // double x = 343.1665946234;
    cout << "fixed (x): " << x << endl;

    // double y = 343223.6789;
    cout << "fixed (y): " << y << endl;
    
    // double z = 3432456.1665946234;
    cout << "fixed (z): " << z << endl;
    
    // double p = 1.2;
    cout << "fixed (p): " << p << endl;
    
    
    cout << "**********************************************************************" << endl;

    cout << "Scientific output of floating point (with 4 digits after the decimal point): " << endl;
    // Ensures scientific notation
    // setprecision(n):  n specifically controls the number of digits displayed after the decimal point in the coefficient (mantissa)
    // Always shows exactly n decimal places, even if they are zeros (e.g., 1.2 with setprecision(6) displays as 1.200000)
    // Decimal Placement: There is always exactly one digit before the decimal point.
    // Precision n: There will be exactly n digits after the decimal point.
    // Trailing Zeros: Trailing zeros are included to reach exactly n decimal places.
    // Rounding: The last decimal digit is rounded based on the next digit of the actual value.
    cout << scientific;
    cout << setprecision(4);

    // double x = 343.1665946234;
    cout << "scientific (x): " << x << endl;

    // double y = 343223.6789;
    cout << "scientific (y): " << y << endl;
    
    // double z = 3432456.1665946234;
    cout << "scientific (z): " << z << endl;
    
    // double p = 1.2;
    cout << "scientific (p): " << p << endl;


    cout << "all sticky except (setw)" << endl;
    cout << "C++ has way too many options to overwhelm anyone!" << endl;
    cout << "But it is meant to make our life easier! rolling eyes.... ;)" << endl;
    
}
