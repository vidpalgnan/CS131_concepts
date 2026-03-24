////
////  class_sort.cpp
////  concepts
////
////  Created by Vidhya Gnanam on 3/10/26.
////
//
//#include <fstream>
//#include <iostream>
//#include <string>
//#include <fstream>   // file streams live here
//#include <filesystem>
//using namespace std;
//namespace fs = std::filesystem;
//
//class Student {
//private:
//    int id;
//    string name;
//
//public:
//    // Default constructor
//    Student() : id(0), name("") {}
//
//    // Setters
//    void setId(int newId) {
//        id = newId;
//    }
//
//    void setName(const string& newName) {
//        name = newName;
//    }
//
//    // Getters
//    int getId() const {
//        return id;
//    }
//
//    string getName() const {
//        return name;
//    }
//
//    // Write one record to a stream
//    void write(ostream& out) const {
//        out << id << " " << name;
//    }
//};
//
//void resizeArray(Student*& students, int& capacity, int count) {
//    int newCapacity = capacity * 2;
//    Student* bigger = new Student[newCapacity];
//
//    for (int i = 0; i < count; i++) {
//        bigger[i] = students[i];
//    }
//
//    delete[] students;
//    students = bigger;
//    capacity = newCapacity;
//}
//
//void selectionSort(Student students[], int count) {
//    for (int i = 0; i < count - 1; i++) {
//        int minIndex = i;
//
//        for (int j = i + 1; j < count; j++) {
//            if (students[j].getId() < students[minIndex].getId()) {
//                minIndex = j;
//            }
//        }
//
//        if (minIndex != i) {
//            Student temp = students[i];
//            students[i] = students[minIndex];
//            students[minIndex] = temp;
//        }
//    }
//}
//
//void writeToFile(const string& filename, Student students[], int count) {
//    ofstream fout(filename);
//
//    if (!fout) {
//        cout << "Error: could not open " << filename << endl;
//        return;
//    }
//
//    for (int i = 0; i < count; i++) {
//        students[i].write(fout);
//        fout << '\n';
//    }
//
//    fout.close();
//}
//
//int main() {
//    std::cout << "Current path is " << fs::current_path() << std::endl;
//    // fs::path newPath = "C:/Temp"; // Replace with your desired path
//
//    fs::path newPath = "/Users/vidhyapg/Desktop/Work/EvCC/Teaching/131C++/CS131_concepts/concepts/concepts/files_back"; // Replace with your desired path
//    
//    if (fs::exists(newPath) && fs::is_directory(newPath)) {
//        fs::current_path(newPath); // Change the current working directory
//        std::cout << "Changed path to " << fs::current_path() << std::endl;
//    } else {
//        std::cerr << "Directory not found: " << newPath << std::endl;
//    }
//    const string inputFile = "students.txt";
//    const string outputFile = "sorted_students.txt";
//
//    ifstream fin(inputFile);
//    if (!fin) {
//        cout << "Error: could not open " << inputFile << endl;
//        return 1;
//    }
//
//    int capacity = 4;
//    int count = 0;
//    int resizeCount = 0;
//
//    Student* students = new Student[capacity];
//
//    int id;
//    string name;
//
//    while (fin >> id >> name) {
//        if (count == capacity) {
//            resizeArray(students, capacity, count);
//            resizeCount++;
//        }
//
//        students[count].setId(id);
//        students[count].setName(name);
//        count++;
//    }
//
//    fin.close();
//
//    selectionSort(students, count);
//    writeToFile(outputFile, students, count);
//
//    cout << "Loaded " << count << " students." << endl;
//    cout << "Array resized " << resizeCount << " time(s)." << endl;
//    cout << "Final capacity: " << capacity << endl;
//    cout << "Sorted records written to " << outputFile << endl;
//
//    delete[] students;
//    students = nullptr;
//
//    return 0;
//}
