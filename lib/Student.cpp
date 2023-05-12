#include "../header/Student.h"
#include "iostream"
#include <string>

using namespace std;

Student::Student() {
    name = "";
    GPA = "";
    SID = "";
    yearNumber = "";
    major = "";
}

Student::Student(string name, string GPA, string SID, string yearNumber, string major) {
    this->name = name;
    this->GPA = GPA;
    this->SID = SID;
    this->yearNumber = yearNumber;
    this->major = major;
}   

string Student::getName() {
    return name;
}

void Student::changeName(string name) {
    this->name = name;
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

void Student::changeInfo(string name, string GPA, string SID, string yearNumber, string major) {
    // changeName(name);
    this->name = name;
    changeGPA(GPA);
    changeYearNumber(yearNumber);
    changeMajor(major);
}

string Student::getStudentInfo() {
    string out = "Name: " + this->name + "\n"
        + "GPA: " + GPA + "\n"
        + "Major: " + major + "\n"
        + "SID: " + SID + "\n"
        + "Year: " + yearNumber;
    return out;
    // return "despair";
}