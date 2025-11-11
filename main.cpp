#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person {
    private:
    string name;
	int age;
public:
    Person(string n, int id) {
		name = n;
		id = id;
    }
    void display() {
        cout << "Name: " << name << " Age: " << age << endl;
	}
};







// ==================== Student Class Implementation ====================
class Student : public Person {
private:
    int Yearlevel;
    string major;
public:
    Student(string n, int id, int yl, string m) : Person(n, id) {
        Yearlevel = yl;
        major = m;
    }
 Student() : Person("", 0) {
     Yearlevel = 0;
     major = "";
	}
    void display() {
        cout << "Year Level: " << Yearlevel << " Major: " << major << endl;
	}

};





// ==================== Instructor Class Implementation ====================
class instructor : public Person {
private:
	string department;
    int experienceYears;
public:
    instructor(string n, int id, string dept, int exp) : Person(n, id) {
        department = dept;
        experienceYears = exp;
    }
    void display() {
        cout << "Department: " << department << " Experience Years: " << experienceYears << endl;
	}
};





// ==================== Course Class Implementation ====================
class Course {
private:
    string courseName;
	string courseCode;
    int maxStudents;
	Student* students;
    int currentStudents;
public:
    Course(string cn, string cc, int ms) {
        courseName = cn;
        courseCode = cc;
        maxStudents = ms;
        students = new Student[ms];
        currentStudents = 0;
	}
    void addStudent(const Student& s) {
        if (currentStudents < maxStudents) {
            students[currentStudents] = s;
            currentStudents++;
        }
    }
    void display() {
        cout << "Course Name: " << courseName << " Course Code: " << courseCode << endl;
        for (int i = 0; i < currentStudents; i++) {
            students[i].display();
        }
	}
};








// ==================== Main Function ====================
int main() {
   Person p("Omar Nabil", 2202);
p.display();
Student s("Omar Nabile", 2, 2, "informatics");
s.display();
Course c("introduction to programming", "CS201", 3);
c.addStudent(s);
c.display();
instructor i("Dr.Lina Khaled", 3, "Computer Science", 5);
i.display();
    
    return 0;
}
