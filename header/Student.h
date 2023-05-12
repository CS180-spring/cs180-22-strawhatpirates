#ifndef STUDENT_H
#define STUDENT_H

#include "iostream"
#include "Person.h"

using namespace std;

class Student : public Person {
public: 

    Student();
    Student(string firstName, string lastName, string GPA, string SID, string yearNumber, string major);

    // string getName();
    string getGPA();
    string getSID();
    string getYearNumber();
    string getMajor();

    // void changeName(string name);
    void changeGPA(string GPA);
    void changeSID(string SID);
    void changeYearNumber(string yearNumber);
    void changeMajor(string major);
    void changeInfo(string name, string GPA, string SID, string yearNumber, string major);

    string getStudentInfo();

private:
    // string name;
    string GPA;
    string SID;
    string yearNumber;
    string major;
};

#endif