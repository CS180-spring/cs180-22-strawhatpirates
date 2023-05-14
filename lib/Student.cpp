#include "../header/Student.h"
#include "iostream"
#include <string>

using namespace std;

// Triangle::Triangle() : Triangle(3, 4, 6) {}
Student::Student() :
    Student("", "", "", "", "", "")
{
    // firstName = "";
    // lastName = "";
    // GPA = "";
    // SID = "";
    // yearNumber = "";
    // major = "";
}

// Triangle::Triangle(int a, int b, int c) : a(a), b(b), c(c) {}

Student::Student(string firstName, string lastName, string GPA, string SID, string yearNumber, string major)  : 
    Person(firstName, lastName),
    // firstName(firstName),
    // lastName(lastName),
    GPA(GPA),
    SID(SID),
    yearNumber(yearNumber),
    major(major)
{
    // this->firstName = firstName;
    // this->lastName = lastName;
    // this->GPA = GPA;
    // this->SID = SID;
    // this->yearNumber = yearNumber;
    // this->major = major;
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
    // this->firstName = firstName;
    // this->lastName = lastName;
    changeName(firstName, lastName);
    changeGPA(GPA);
    changeYearNumber(yearNumber);
    changeMajor(major);
}

string Student::getStudentInfo() {
    string out = "Name: " + this->firstName + " " + this->lastName + "\n"
        + "GPA: " + GPA + "\n"
        + "Major: " + major + "\n"
        + "SID: " + SID + "\n"
        + "Year: " + yearNumber;
    return out;
    // return "despair";
}