// main.cpp

#include "Student.cpp"
#include "Course.cpp"

int main() {
    // Create students
    Student student1("John Doe", 1);
    Student student2("Jane Doe", 2);

    // Create courses
    Course course1("Introduction to C++", 101);
    Course course2("Advanced C++ Programming", 102);

    // Display student and course information
    std::cout << "Student Information:\n";
    student1.displayInfo();
    std::cout << "\n";
    student2.displayInfo();

    std::cout << "\nCourse Information:\n";
    course1.displayInfo();
    std::cout << "\n";
    course2.displayInfo();

    return 0;
}
