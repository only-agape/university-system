// Student.cpp

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int studentId;

public:
    Student(std::string name, int studentId) : name(name), studentId(studentId) {}

    void displayInfo() {
        std::cout << "Student ID: " << studentId << "\n";
        std::cout << "Name: " << name << "\n";
    }
};
