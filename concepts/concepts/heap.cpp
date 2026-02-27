//
//  heap.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/26/26.
//
void memory_leak() {
    int count = 0;
    while (count < 1000000000000) {
        int* a = new int[100000];
        // NO delete -> memory leak
        //delete[] a;
        count++;
    }
}

