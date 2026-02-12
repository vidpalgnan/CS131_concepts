//
//  file.cpp
//  concepts
//
//  Created by Vidhya Gnanam on 2/11/26.
//

#include <iostream>
#include <fstream>   // file streams live here
#include <filesystem>

using namespace std;

namespace fs = std::filesystem;

int read_file_formatted_simple()
{
    std::cout << "Current path is " << fs::current_path() << std::endl;
    
    // fs::path newPath = "C:/Temp"; // Replace with your desired path

    fs::path newPath = "/Users/vidhyapg/Desktop/Work/EvCC/Teaching/131C++/CS131_concepts/concepts/concepts/files_back"; // Replace with your desired path
    
    if (fs::exists(newPath) && fs::is_directory(newPath)) {
        fs::current_path(newPath); // Change the current working directory
        std::cout << "Changed path to " << fs::current_path() << std::endl;
    } else {
        std::cerr << "Directory not found: " << newPath << std::endl;
    }
    
    
    ifstream fin;
    fin.open("formatted_simple.txt");
    
    if (fin.fail()) {
        cout << "Error: unable to open input file.\n";
        return 1;
    }
    
    int num;
    int total = 0;
    int count = 0;

    // fin >> num  tries to read an int.
    // If it succeeded, the expression is “truthy”, so the while continues.
    // When you hit EOF or bad data (e.g., non-number where an int is expected), the extraction fails, sets the stream’s failbit, and the condition becomes false, ending the loop.
    while (fin >> num) {
        cout << num << endl;
        total += num;
        count++;
    }
      
    // after loop:
    if (fin.eof()) {
        cout << "we stopped because we hit end-of-file" <<endl;
    } else if (fin.fail()) {
        cout << "we stopped because of bad input / format error";
    }
    
    cout << "Total: " << total << '\t' << "Count: " << count << endl;

    ofstream fout1;
    fout1.open("formatted_simple_results.txt");

    if (fout1.fail()) {
        cout << "Error: unable to open output file.\n";
        return 1;
    }
    
    fout1 << "Total: " << total << '\t' << endl;
    fout1 << "Count: " << count << endl;


    fin.close();
    fout1.close();
    
    return 0;
}

int read_file_formatted()
{
    std::cout << "Current path is " << fs::current_path() << std::endl;
    // fs::path newPath = "C:/Temp"; // Replace with your desired path

    fs::path newPath = "/Users/vidhyapg/Desktop/Work/EvCC/Teaching/131C++/CS131_concepts/concepts/concepts/files_back"; // Replace with your desired path
    
    if (fs::exists(newPath) && fs::is_directory(newPath)) {
        fs::current_path(newPath); // Change the current working directory
        std::cout << "Changed path to " << fs::current_path() << std::endl;
    } else {
        std::cerr << "Directory not found: " << newPath << std::endl;
    }
    
    
    ifstream fin;
    fin.open("formatted.txt");
    if (fin.fail()) {
        cout << "Error: unable to open input file.\n";
        return 1;
    }
    
    string name;
    int age;
    int total = 0;
    int count = 0;

    // fin >> num >> name tries to read an int and then a std::string.
    // If both succeed, the expression is “truthy”, so the while continues.
    // When you hit EOF or bad data (e.g., non-number where an int is expected), the extraction fails, sets the stream’s failbit, and the condition becomes false, ending the loop.
    while (fin >> name >> age) {
        cout << name << '\t' << age << endl;
        total += age;
        count++;
    }
    
    // after loop:
    if (fin.eof()) {
        cout << "we stopped because we hit end-of-file"<< endl;
    } else if (fin.fail()) {
        cout << "we stopped because of bad input / format error"<< endl;
    }
    
    cout << "Total: " << total << '\t' << "Count: " << count << endl;

    ofstream fout;
    fout.open("formatted_results.txt");

    if (fout.fail()) {
        cout << "Error: unable to open output file.\n";
        return 1;
    }

    fout << "Total: " << total << '\t' << endl;
    fout << "Count: " << count << endl;

    fin.close();
    fout.close();
    
    return 0;
}

int read_file_raw()
{
    
    std::cout << "Current path is " << fs::current_path() << std::endl;
    // fs::path newPath = "C:/Temp"; // Replace with your desired path

    fs::path newPath = "/Users/vidhyapg/Desktop/Work/EvCC/Teaching/131C++/CS131_concepts/concepts/concepts/files_back"; // Replace with your desired path
    
    if (fs::exists(newPath) && fs::is_directory(newPath)) {
        fs::current_path(newPath); // Change the current working directory
        std::cout << "Changed path to " << fs::current_path() << std::endl;
    } else {
        std::cerr << "Directory not found: " << newPath << std::endl;
    }
    
    
    ifstream fin;
    fin.open("infile_raw.txt");
    if (fin.fail()) {
        cout << "Error: unable to open input file.\n";
        return 1;
    }
    
    int total = 0;
    int count = 0;
    

    // reads every character (including spaces/newlines)
    // 0 1 2 3 4
//    while (!fin.eof())
//    {
//        int c = fin.get();
//        if (c >= '0' && c <= '9')
//        {
//            total += c - '0';
//            // cout << c << endl;
//            count++;
//        }
//        else if (c == EOF)
//        {
//            cout << "EOF" << endl;
//        }
//        else {
//            continue;
//        }
//    }
    
    // EOF is only set after a read fails.
//    while (!fin.eof()) {   // 1. check EOF (still false),
//        fin >> num;        // 2. try to read, may FAIL here.
//        // use num         // 3. you might now use invalid/stale data
//    }
//    
    
    int c;
    total = 0;
    count = 0;
    while ((c = fin.get()) != EOF) {
        if (c >= '0' && c <= '9')
        {
            total += c - '0';
            // cout << c << endl;
            count++;
        }
    }
    
    // after loop:
    if (fin.eof()) {
        cout << "we stopped because we hit end-of-file" << endl;
    } else if (fin.fail()) {
        cout << "we stopped because of bad input / format error" << endl;
    }
    
    cout << "Total: " << total << '\t' << "Count: " << count << endl;

    ofstream fout;
    fout.open("raw_results.txt");

    if (fout.fail()) {
        cout << "Error: unable to open output file.\n";
        return 1;
    }

    fout << "Total: " << total << "\n";
    fout << "Count: " << count << "\n";

    fin.close();
    fout.close();
    
    return 0;
}
