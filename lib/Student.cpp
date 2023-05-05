#include "../header/Student.h"
#include "iostream"

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

void Student::changeName(string name) {
    this->name = name;
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
    changeName(name);
    changeGPA(GPA);
    changeYearNumber(yearNumber);
    changeMajor(major);
}

string Student::getStudentInfo() {
    return "despair";
}