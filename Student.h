#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here

class Student : public Person {
private:
    int Yearlevel;
    string major;
public:
  Student(string n, int id, int yl, string m);
    void display();

};












#endif
