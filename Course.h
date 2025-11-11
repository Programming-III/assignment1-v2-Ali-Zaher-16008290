#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course {
private:
    string courseName;
	string courseCode;
    int maxStudents;
	Student* students;
    int currentStudents;
public:
    Course(string cn, string cc, int ms);
    void addStudent(const Student& s) ;
    void display();
};














#endif
