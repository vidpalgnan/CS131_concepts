//
//  floatingpoint.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 1/14/26.
//

#include <iostream>
#include <iomanip>

using namespace std;

void all_about_floatingpoint()
{
     cout << "Q1: What? Is float stealing my money?" << '\n';
    
     
     int a = 16777217;      // exact
     float b = 16777217.0; // becomes 16777216
     cout << fixed << a << '\n' << b << '\n';
     
     cout << "\n\n";
     
     cout << "Q2: Really, how can you mess up this simple math?" << '\n';
     float x = 0.1;
     float y = 0.2;
     // cout << setprecision(20)<< x << '\n';
     // cout << setprecision(20)<< y << '\n';

     float z = x + y;   // not exactly 0.3
     cout << z << '\n';
     cout << setprecision(20)<< z << '\n';

     // this is not even allowed. Try!
     //if (z != 0.3)
     {
         // cout << "Not exactly 0.3";
     }
     
     cout << "\n\n";

     cout << "Is double any better?" << '\n';
     double x1 = 0.1;
     double y1 = 0.2;
     double z1 = x + y;   // not exactly 0.3
     cout << z1 << '\n';

     if (z1 != 0.3)
     {
         cout << "Not exactly 0.3";
     }
     
     cout << "\n\n";

     cout << "Ok time to understand what is really going on?" << '\n';
     float  f = 0.1f;
     double d = 0.1;
     std::cout << setprecision(20) << f << "\n";
     std::cout << setprecision(20) << d << "\n";
     
     // 0.1 in binary is: 0.1₁₀ = 0.000110011001100110011...₂ repeating forever
     // in IEEE 754 binary scientific notation is 1.10011001100110011...₂ repeating forever x 2^-4
     // there is only limited number of bits to reprensent the exponent and manitissa.
     // so rounding happens and that's when people freak out, because in human speak (decimal), 0.1 is just 0.1.
     // in computer speak (binary) it is this unending number.
     // So binary can only exactly represent fractions whose denominator is a power of 2.
     // Decimal    Binary    Exact?
     // 0.5 (1/2)    0.1₂    ✅
     // 0.25 (1/4)    0.01₂    ✅
     // 0.125 (1/8)    0.001₂    ✅
     // 0.1    0.0001100110011…₂    ❌ repeating

    
     // In 32 bits, if you use 8 bits for exponent (which a huge number range (2^2^7, 1 bit for sign of exponent) and gives the ability to store large numbers in float compared to int which uses same number of bits. float traded off precision for range)
     // remaining with 24 bits for manitissa and sign of number:
     // 2 ^ 24 = 16,777,216
     
     // Because 24 bits can’t distinguish +1 anymore at that magnitude.
     // Same logic, more bits.- So double is better but fails at a higher level

     // Type    Precision bits    Decimal digits
     // float    24              ~7
     // double   53              ~15–16
     
     // Why?
     // 53 × log₁₀(2) ≈ 15.95 decimal digits
     
     cout << "\n";

     /*{
         cout << "So if I don't get more than 7 digit salary, floating point is still reliable? what if inflation catches up?" << '\n';
         
         float a1 = 1234567.0f;   // 7 digits → exact
         float b1 = 1000000.0f;   // exact
         // These may or may not be exact
         float c1 = 16777216.0f;  // exact (2^24)
         float d1 = 16777217.0f;  // NOT exact → rounds to 16777216
      
         cout << "Floating-point doesn’t fail loudly — it fails silently." << '\n';
         cout << "Precision limits don’t crash your program; they bend reality just enough to hurt you later." << '\n';

     }*/
     

     //  Floating-point is for measuring the world (where already there is some error), not the counting world.
     //  When correctness matters more than approximation, don’t use float.
     //  When memory & speed matter more than exactness, use float.
     //  Use floating-point only when small rounding errors are acceptable and values represent measurements, not counts or money.
     //  Prefer double, but know that it has same limitations, but gives you more room.
     //  Floating-point error is not a bug — it’s the cost of representing infinite precision with finite bits.
     //  Can happen even with decimal scientific notation. 1/3= 0.33333...But we humans already are aware of this.
     //  We are not aware that 0.1 never terminates in binary(0.0001100110011…₂) and we don't expect it to happen in real world where it matters. 

}
