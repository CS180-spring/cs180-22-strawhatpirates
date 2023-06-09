#include "../header/Professor.h"

using namespace std;

Professor::Professor() : 
    Professor("", "", "", "", "")
{
    // firstName = "";
    // lastName = "";
    // department = "";
    // rank = "";
}

Professor::Professor(string firstName, string lastName, string department, string rank, string EID) :
    Person(firstName, lastName),
    department(department),
    rank(rank),
    EID(EID)
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

string Professor::getEID() {
    return EID;
}

string Professor::getInfo() {
    string out = "Name: " + this->firstName + " " + this->lastName + "\n"
        + "Department: " + department + "\n"
        + "Rank: " + rank;
    return out;
}

void Professor::changeDepartment(string department) {
    this->department = department;
}

void Professor::changeRank(string rank) {
    this->rank = rank;
}

void Professor::changeEID(string EID) {
    this->EID = EID;
}

void Professor::changeInfo(string firstName, string lastName, string department, string rank, string EID) {
    changeName(firstName, lastName);
    changeDepartment(department);
    changeRank(rank);
    changeEID(EID);
}

bool Professor::departmentIsValid(string department) {
    bool validFormat = regex_match (department, std::regex("^[\\w]+[\\D]+$"));
    if(!validFormat) {
        return false;
    }

    for(int i = 0; i < departmentList.size(); i++) {
        if(department == departmentList[i]) {
            return true;
        }
    }

    return false;
}

bool Professor::rankIsValid(string rank) {
    bool validFormat = regex_match (rank, std::regex("^[\\w]+[\\D]+$"));
    if(!validFormat) {
        return false;
    }

    for(int i = 0; i < rankList.size(); i++) {
        if(rank == rankList[i]) {
            return true;
        }
    }

    return false;
}

bool Professor::EIDIsValid(string EID) {
    return regex_match (EID, regex("\\d\\d\\d\\d\\d\\d\\d\\d\\d"));
}

bool Professor::infoIsValid(string firstName, string lastName, string department, string rank, string EID) {
    return nameIsValid(firstName, lastName) 
            && departmentIsValid(department) 
            && rankIsValid(rank)
            && EIDIsValid(EID);
}