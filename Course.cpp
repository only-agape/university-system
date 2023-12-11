// Course.cpp

#include <iostream>
#include <string>

class Course {
private:
    std::string courseName;
    int courseId;

public:
    Course(std::string courseName, int courseId) : courseName(courseName), courseId(courseId) {}

    void displayInfo() {
        std::cout << "Course ID: " << courseId << "\n";
        std::cout << "Course Name: " << courseName << "\n";
    }
};
