//
//  string_class.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/26/26.
//

#include <iostream>
#include <cstring>
#include <cctype>

class MyString {
private:
    char* buffer;
    size_t length;
    size_t capacity;

    // Helper to resize the buffer when it gets full
    void grow() {
        capacity *= 2;
        char* newBuffer = new char[capacity];
        std::strcpy(newBuffer, buffer);
        delete[] buffer;
        buffer = newBuffer;
    }

public:
    // Constructor
    MyString(const char* s = "") {
        length = std::strlen(s);
        capacity = length + 16; // Extra breathing room
        buffer = new char[capacity];
        std::strcpy(buffer, s);
    }

    // Destructor (Rule of Three)
    ~MyString() {
        delete[] buffer;
    }

    // Copy Constructor (Rule of Three)
    MyString(const MyString& other) {
        length = other.length;
        capacity = other.capacity;
        buffer = new char[capacity];
        std::strcpy(buffer, other.buffer);
    }

    // Assignment Operator (Rule of Three)
    MyString& operator=(const MyString& other) {
        if (this != &other) {
            delete[] buffer;
            length = other.length;
            capacity = other.capacity;
            buffer = new char[capacity];
            std::strcpy(buffer, other.buffer);
        }
        return *this;
    }

    // Overload >> for input
    friend std::istream& operator>>(std::istream& in, MyString& obj) {
        char c;
        size_t count = 0;

        // Reset the object's buffer for new input
        obj.buffer[0] = '\0';
        
        // Skip leading whitespace
        while (in.get(c) && std::isspace(c));

        if (in) {
            do {
                // If we hit capacity, grow the buffer dynamically
                if (count + 1 >= obj.capacity) {
                    obj.grow();
                }
                obj.buffer[count++] = c;
            } while (in.get(c) && !std::isspace(c)); // Stop at whitespace
            
            obj.buffer[count] = '\0';
            obj.length = count;
        }
        return in;
    }

    // Overload << for output
    friend std::ostream& operator<<(std::ostream& out, const MyString& obj) {
        out << obj.buffer;
        return out;
    }
};

void test_string() {
    MyString str;

    std::cout << "Enter a string of any length (it won't overflow!): ";
    std::cin >> str;

    std::cout << "You entered: " << str << std::endl;

}
