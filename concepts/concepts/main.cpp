//
//  main.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 1/14/26.
//

#include "floating_point.h"
#include "stream_manipulators.h"
#include <filesystem>
#include <fstream> // file streams live here
#include <iomanip>
#include <iostream>

using namespace std;

namespace fs = std::filesystem;

void whileandif();
void for_random();
void scratch();
void singleforloop();
void array_random();
void whileandfor();
void fibbonocci();
void array_pointers();
void for_withuserinput();
int read_file_formatted();
int read_file_raw();
int read_file_formatted_simple();
int compare(int a, int b, int c);
void a_huge_array();
void cause_overflow(int a);
void c_string_stack_buffer_overflow();
void c_string_heap_no_null();
void memory_leak();
void c_string_stack_no_null();

using namespace std;
// int main(int argc, const char * argv[]) {
////    a_huge_array();
//    // cause_overflow(1);
//    // c_string_stack_buffer_overflow();
//    //c_string_stack_no_null();
//    // c_string_heap_no_null();
//    // memory_leak();
//    cout << "Done" << endl;
//
//     int scores[6] = {78, 45, 89, 46, 23, 12};
//     int count = 0;
//     for (int num : scores){
//          if (num >= 70){
//
//               count++;
//          }
//     }
//     cout << count;
//    return EXIT_SUCCESS;
//
//}
//

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
const int RANGE = 50000;

using namespace std;
void fillArrayWithOddNumbers(int ptr[], const int SIZE) {
    srand(static_cast<unsigned>(time(nullptr)));
    for (int i = 0; i < SIZE; i++) {
        // You can either do this:
//        int random = rand() % RANGE + 1 ;
//        // loop until random produces odd.
//        while ((random % 2 == 0)) {
//            random = rand() % RANGE + 1 ;
//        }
//        ptr[i] = random;
        
        // or do this:
        // whatever random produces, make it odd ensuring it is within range.
        int random = (((rand() % (RANGE/2 + 1)) * 2) - 1);
        ptr[i] = random;

        // cout << ptr[i] << '\t';
    }
}
int main() {
    const int SIZE = 5000;
    int *random = new int[SIZE];
    double average = 0, total = 0;
    fillArrayWithOddNumbers(random, SIZE);
    for (int i = 0; i < SIZE; i++) {
        total += random[i];
    }
    average = total / SIZE;
    cout << fixed << setprecision(2) << average << endl << total;
    delete[] random;
    return 0;
}
