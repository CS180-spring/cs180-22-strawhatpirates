#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <string>
#include <regex>
#include <iostream>
#include <vector>

using namespace std;

class Professor : public Person {
public: 

    Professor();
    Professor(string firstName, string lastName, string department, string rank);

    string getDepartment();
    string getRank();

    void changeInfo(string firstName, string lastName, string department, string rank);
    void changeDepartment(string department);
    void changeRank(string rank);

    string getInfo();

    bool departmentIsValid(string department);
    bool rankIsValid(string rank);
    bool infoIsValid(string firstName, string lastName, string department, string rank);

private:
    string department;
    string rank;

    vector<string> departmentList{"Computer Science and Engineering", "Electrical and Computer Engineering", "Bioengineering", "Chemical/Environmenta; Engineering",
                                "Mathematics", "Physics and Astronomy", "Biochemistry", "Chemistry", "Botany and Plant Sciences"};
    vector<string> rankList{"Tenure-Track", "Emeritus", "Adjunct", "Cooperating"};
};

#endif