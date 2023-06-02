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
    Professor(string firstName, string lastName, string department, string rank, string EID);

    string getDepartment();
    string getRank();
    string getEID();

    void changeInfo(string firstName, string lastName, string department, string rank, string EID);
    void changeDepartment(string department);
    void changeRank(string rank);
    void changeEID(string EID);

    string getInfo();

    bool departmentIsValid(string department);
    bool rankIsValid(string rank);
    bool EIDIsValid(string EID);
    bool infoIsValid(string firstName, string lastName, string department, string rank, string EID);

private:
    string department;
    string rank;
    string EID;

    vector<string> departmentList{"BIOL","CHEM", "BSNS", "PHYS", "CEN", "CS", "EDU", 
                                "ENGL", "HIST", "MATH", "PSY", "POLS", "PHIL", "ART", "MUS"};
    vector<string> rankList{"Tenure-Track", "Emeritus", "Adjunct", "Cooperating"};
};

#endif