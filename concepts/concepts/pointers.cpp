//
//  pointers.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/8/26.
//

#include <iostream>
using namespace std;
void array_pointers()
{
    const int SIZE = 5;
    int nums[SIZE]= {1,2,3,4,5};

    int *addr = nums;
    for(int i = 0; i<SIZE; i++)
    {
        cout << addr << '\t' << *addr <<endl;// address of first element
        addr++;
    }

    cout << nums[SIZE-1] << endl;
    //nums = 10; // Array type 'int[5]' is not assignable, phew!
}
