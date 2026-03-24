//
//  stack.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/25/26.
//
#include <iostream>
using namespace std;

#if defined(_WIN32)
#include <windows.h>
void print_stack_limit() {
    ULONG_PTR lowLimit, highLimit;
    GetCurrentThreadStackLimits(&lowLimit, &highLimit);
    size_t bytes = static_cast<size_t>(highLimit - lowLimit);
    cout << "Stack limit (this thread): " << bytes << " bytes ("
         << (bytes / (1024.0 * 1024.0)) << " MB)\n";
}
#elif defined(__unix__) || defined(__APPLE__)
#include <sys/resource.h>
void print_stack_limit() {
    rlimit limit{};
    if (getrlimit(RLIMIT_STACK, &limit) == 0) {
        auto bytes = static_cast<double>(limit.rlim_cur);
        cout << "Stack soft limit: " << static_cast<long long>(limit.rlim_cur)
             << " bytes (" << (bytes / (1024.0 * 1024.0)) << " MB)\n";
    }
}
#else
void print_stack_limit() {
    cout << "Stack limit query not supported on this platform.\n";
}
#endif

void print_memory_required(long long count, size_t elem_size) {
    long long bytes = count * static_cast<long long>(elem_size);
    cout << "Requested array memory: " << bytes << " bytes ("
         << (bytes / (1024.0 * 1024.0)) << " MB)\n";
}

void a_huge_array() {
    long long n;
    cout << "Enter array size (try something large): ";
    cin >> n;

    print_memory_required(n, sizeof(int));
    print_stack_limit();

    cout << "Attempting stack allocation...\n";

    // NOTE: This is a VLA extension (not standard C++) on some compilers:
    int data[n];

    data[0] = 2.0;
    cout << "Allocated! data[0] = " << data[0] << "\n";
}

void cause_overflow(int depth) {
    // Print every 1000 calls so you can see it working
    if (depth % 1000 == 0) {
        std::cout << "Current depth: " << depth << std::endl;
    }

    // High stack usage: add a local array to each frame
    // This makes the stack "fill up" much faster.
    double junk[100];
    junk[0] = depth;

    // Recursive call with no exit condition
    cause_overflow(depth + 1);
}
