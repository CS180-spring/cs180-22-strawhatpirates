#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <regex>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Student : public Person {
public: 

    Student();
    Student(string firstName, string lastName, string GPA, string major, string SID, string yearNumber);

    // string getName();
    string getGPA();
    string getSID();
    string getYearNumber();
    string getMajor();

    // void changeName(string firstName, string lastName);
    void changeGPA(string GPA);
    void changeSID(string SID);
    void changeYearNumber(string yearNumber);
    void changeMajor(string major);
    void changeInfo(string name, string GPA, string major, string SID, string yearNumber);

    bool GPAIsValid(string GPA);
    bool SIDIsValid(string SID);
    bool yearNumberIsValid(string yearNumber);
    bool majorIsValid(string major);
    bool infoIsValid(string firstName, string lastName, string GPA, string major, string SID, string yearNumber);

    string getInfo();
    void getInfoNeat();

private:
    // string name;
    string GPA;
    string SID;
    string yearNumber;
    string major;
    enum major {Freshman, Sophomore, Junior, Senior};
    vector<string> majorList{"BIOL","CHEM", "BSNS", "PHYS", "CEN", "CS", "EDU",
                             "ENGL", "HIST", "MATH", "PSY", "POLS", "PHIL", "ART", "MUS"};
};

#endif