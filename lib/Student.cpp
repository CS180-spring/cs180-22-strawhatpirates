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
    changeName(firstName, lastName);
    changeGPA(GPA);
    changeMajor(major);
    changeSID(SID);
    changeYearNumber(yearNumber);
}

bool Student::GPAIsValid(string GPA) {
    bool validFormat = regex_match (GPA, regex("(\\d\\.\\d\\d)+$"));
    if(!validFormat) {
        return false;
    }

    double d_GPA = stod(GPA);
    bool GPAInRange = d_GPA >= 0.00 && d_GPA <= 4.00;

    return GPAInRange && validFormat;
}

bool Student::SIDIsValid(string SID) {
    return regex_match (SID, regex("\\d\\d\\d\\d\\d\\d\\d\\d\\d"));
}

bool Student::yearNumberIsValid(string yearNumber) {
    bool validFormat = regex_match (yearNumber, regex("\\d"));
    if(!validFormat) {
        return false;
    }
    
    return stoi(yearNumber) >= 1;
}

bool Student::majorIsValid(string major) {
    bool validFormat = regex_match (major, regex("^[A-Z]+$"));
    if(!validFormat) {
        return false;
    }

    for(int i = 0; i < majorList.size(); i++) {
        if(major == majorList[i]) {
            return true;
        }
    }

    return false;
}

bool Student::infoIsValid(string firstName, string lastName, string GPA, string major, string SID, string yearNumber) {
    return nameIsValid(firstName, lastName)
        && GPAIsValid(GPA) 
        && SIDIsValid(major) 
        && yearNumberIsValid(SID)
        && majorIsValid(yearNumber);
}

string Student::getInfo() {
    // string out = setw(15) << left << firstName << "\n"
    //             << setw(15) << left << lastName << "\n"
    //             << setw(10) << left << GPA << "\n"
    //             << setw(15) << left << major << "\n"
    //             << setw(15) << left << SID << "\n"
    //             << setw(10) << left << yearNumber << endl;
    string out = "Name: " + this->firstName + " " + this->lastName + "\n"
        + "GPA: " + GPA + "\n"
        + "Major: " + major + "\n"
        + "SID: " + SID + "\n"
        + "Year: " + yearNumber;
    return out;
}

void Student::getInfoNeat() {
    string printFirstName = firstName;
    string printLastName = lastName;
    if(firstName.length() > 14) {
        printFirstName = (firstName.find(" ") != string::npos) ? firstName.substr(0, firstName.find(" ")) : firstName.substr(0, 14);
    }

    if(lastName.length() > 14) {
        printLastName = (lastName.find(" ") != string::npos) ? lastName.substr(0, lastName.find(" ")) : lastName.substr(0, 14);
    }

    cout << setw(15) << left << printFirstName;
    cout << setw(15) << left << printLastName;
    cout << setw(10) << left << GPA;
    cout << setw(15) << left << major;
    cout << setw(15) << left << SID;
    cout << setw(10) << left << yearNumber << endl;
}