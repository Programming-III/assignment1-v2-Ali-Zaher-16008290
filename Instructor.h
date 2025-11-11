#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here

class instructor {
private:
	string department;
    int experienceYears;
public:
    instructor(string n, int id, string dept, int exp);
    void display();
};










#endif
