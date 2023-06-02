#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <string>
#include <regex>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Professor : public Person {
public: 

    Professor();
    Professor(string firstName, string lastName, string department, string rank, string EID);

    string getDepartment();
    string getRank();
    string getEID();
    string getInfo();

    void changeDepartment(string department);
    void changeRank(string rank);
    void changeEID(string EID);
    void changeInfo(string firstName, string lastName, string department, string rank, string EID);

    bool departmentIsValid(string department);
    bool rankIsValid(string rank);
    bool EIDIsValid(string EID);
    bool infoIsValid(string firstName, string lastName, string department, string rank, string EID);

private:
    string department;
    string rank;
    string EID;

    vector<string> departmentList{"BIOL","CHEM", "BSNS", "PHYS", "CEN", "CS", "EDU", 
                                "ENGL", "HIST", "MATH", "PSY", "POLS", "PHIL", "ART", "MUS", "DS"};
    vector<string> rankList{"Tenure-Track", "Emeritus", "Adjunct", "Cooperating"};
};

#endif