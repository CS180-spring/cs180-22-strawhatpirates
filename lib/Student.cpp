#include "../header/Student.h"
#include "iostream"

using namespace std;

Student::Student() {
    first_Name = "";
    last_Name = "";
    GPA = "";
    SID = "";
    yearNumber = "";
    major = "";
}

Student::Student(string first_Name, string last_Name, string GPA, string SID, string yearNumber, string major) {
    this->first_Name = first_Name;
    this->last_Name = last_Name;
    this->GPA = GPA;
    this->SID = SID;
    this->yearNumber = yearNumber;
    this->major = major;
}   

string Student::getGPA() {
    return GPA;
}

string Student::getSID() {
    return SID;
}

string Student::getYearNumber() {
    return yearNumber;
}

string Student::getMajor() {
    return major;
}

void Student::changeGPA(string GPA) {
    this->GPA = GPA;
}

void Student::changeSID(string SID) {
    this->SID = SID;
}

void Student::changeYearNumber(string yearNumber) {
    this->yearNumber = yearNumber;
}

void Student::changeMajor(string major) {
    this->major = major;
}

void Student::changeInfo(string first_Name, string last_Name, string GPA, string SID, string yearNumber, string major) {
    changeName(name);
    changeGPA(GPA);
    changeYearNumber(yearNumber);
    changeMajor(major);
}

string Student::getStudentInfo() {
    return "despair";
}