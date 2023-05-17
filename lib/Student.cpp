#include "../header/Student.h"

using namespace std;

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

Student::Student(string firstName, string lastName, string GPA, string major, string SID, string yearNumber)  : 
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

void Student::changeInfo(string name, string GPA, string major, string SID, string yearNumber) {
    // this->firstName = firstName;
    // this->lastName = lastName;
    changeName(firstName, lastName);
    changeGPA(GPA);
    changeMajor(major);
    changeSID(SID);
    changeYearNumber(yearNumber);
}

bool Student::GPAIsValid(string GPA) {
    return std::regex_match (GPA, std::regex("(\\d\\.\\d\\d)+$"));
    // int length = GPA.find_last_of('.');
    // GPA.erase(0,length + 1);
    // int numOfDecimals = GPA.length();

    // for(int i = 0; i < GPA.length(); i++) {

    // }

    // return (numOfDecimals > 1);
}

bool Student::SIDIsValid(string SID) {
    return std::regex_match (GPA, std::regex("\\d\\d\\d\\d\\d\\d\\d\\d\\d"));
}

bool Student::yearNumberIsValid(string yearNumber) {
    return std::regex_match (GPA, std::regex("\\d"));
}

bool Student::majorIsValid(string major) {
    return std::regex_match (GPA, std::regex("^[0-9]+$"));
    
}

bool Student::infoIsValid(string firstName, string lastName, string GPA, string major, string SID, string yearNumber) {
    return nameIsValid(firstName, lastName)
        && GPAIsValid(GPA) 
        && SIDIsValid(major) 
        && yearNumberIsValid(SID)
        && majorIsValid(yearNumber);
}

string Student::getInfo() {
    string out = "Name: " + this->firstName + " " + this->lastName + "\n"
        + "GPA: " + GPA + "\n"
        + "Major: " + major + "\n"
        + "SID: " + SID + "\n"
        + "Year: " + yearNumber;
    return out;
    // return "despair";
}