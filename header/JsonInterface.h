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
#include <fstream>
#include <algorithm>
#include <limits>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

#include "Professor.h"
#include "Student.h"
#include "../lib/json.hpp"

using namespace std;

class JsonInterface
{
    public:
        JsonInterface(); //mode = true
        void writeFileStu(vector<Student> dataStu);
        void writeFileProf(vector<Professor> dataProf);
        vector<Student> readFileStu();
        vector<Professor> readFileProf();

        void uppercaseStudents(string& firstName, string& lastName, string& major);
        void uppercaseProfessors(string& firstName, string& lastName, string& department);

        void add();
        void addProfessor();
        void addStudent();

        void sort();
        void sortStudent();
        void sortProfessor();

        void search();
        void searchProfessor();
        void searchStudent();

        void remove();
        void removeProfessor();
        void removeStudent();

        void update();
        void updateProfessor();
        void updateStudent();

        void print();
        void printStudents(vector<Student> data);
        void printProfessors(vector<Professor> data);

        void changeMode();
        bool getMode();
    private:
        vector<Professor> dataProf;
        vector<Student> dataStu;
        bool mode = true;
};

#endif // JSONINTERFACE_H
