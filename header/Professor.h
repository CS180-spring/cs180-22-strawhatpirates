#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <iostream>
#include <list>

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

    list<string> departmentList{"Computer Science and Engineering"};
    list<string> rankList{"Tenure"};
};

#endif