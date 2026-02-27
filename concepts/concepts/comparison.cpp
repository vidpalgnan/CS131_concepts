//
//  comparison.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/17/26.
//

#include <iostream>
using namespace std;
int compare(int a, int b, int c)
{
    int min = a;
    
    if (b < min)
    {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    
    if (min > 0) {
        cout << "Positive Minimum" << min << endl;
    }
    else if (min == 0)
    {
        cout << "Zero Minimum" << min << endl;
    }
    else
    {
        cout << "Negative Minimum" << min << endl;
    }
    return min;
}
