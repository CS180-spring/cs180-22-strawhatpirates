#include "../header/Professor.h"
#include "iostream"

using namespace std;

Professor::Professor() : 
    Professor("", "", "", "")
{
    // firstName = "";
    // lastName = "";
    // department = "";
    // rank = "";
}

Professor::Professor(string firstName, string lastName, string department, string rank) :
    Person(firstName, lastName),
    department(department),
    rank(rank)
{
    // this->firstName = firstName;
    // this->lastName = lastName;
    // this->department = department;
    // this->rank = rank;
}   

string Professor::getDepartment() {
    return department;
}

string Professor::getRank() {
    return rank;
}

void Professor::changeDepartment(string department) {
    this->department = department;
}

void Professor::changeRank(string rank) {
    this->rank = rank;
}

void Professor::changeInfo(string firstName, string lastName, string department, string rank) {
    changeName(firstName, lastName);
    changeDepartment(department);
    changeRank(rank);
}

string Professor::getInfo() {
    string out = "Name: " + this->firstName + " " + this->lastName + "\n"
        + "Department: " + department + "\n"
        + "Rank: " + rank;
    return out;
    // return "despair";
}

bool Professor::departmentIsValid(string department) {
    
    return 
}

bool Professor::rankIsValid(string rank) {
    return 
}

bool Professor::infoIsValid(string firstName, string lastName, string department, string rank) {
    return nameIsValid && departmentIsValid && rankIsValid;
}