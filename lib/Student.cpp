#include "../header/Student.h"
#include "iostream"

using namespace std;

Student::Student() {
    name = "";
    GPA = 0.0;
    SID = 0;
    yearNumber = 0;
    major = "";
}

Student::Student(string name, double GPA, int SID, int yearNumber, string major) {
    changeName(name);
    this->GPA = GPA;
    this->SID = SID;
    this->yearNumber = yearNumber;
    this->major = major;
}   

// string Student::getName() {
//     return name;
// }

double Student::getGPA() {
    return GPA;
}

int Student::getSID() {
    return SID;
}

int Student::getYearNumber() {
    return yearNumber;
}

string Student::getMajor() {
    return major;
}

// void Student::changeName(string name) {
//     this->name = name;
// }

void Student::changeGPA(double GPA) {
    this->GPA = GPA;
}

void Student::changeSID(int SID) {
    this->SID = SID;
}

void Student::changeYearNumber(int yearNumber) {
    this->yearNumber = yearNumber;
}

void Student::changeMajor(string major) {
    this->major = major;
}

void Student::changeInfo(string name, double GPA, int SID, int yearNumber, string major) {
    changeName(name);
    changeGPA(GPA);
    changeYearNumber(yearNumber);
    changeMajor(major);
}

string Student::getStudentInfo() {
    return "despair";
}