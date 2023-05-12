#include "../header/Professor.h"
#include "iostream"

using namespace std;

Professor::Professor() {
    first_Name = "";
    last_Name = "";
    department = "";
    rank = "";
}

Professor::Professor(string first_Name, string last_Name, string department, string rank) {
    this->first_Name = first_Name;
    this->last_Name = last_Name;
    this->department = department;
    this->rank = rank;
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

void Professor::changeInfo(string first_Name, string last_Name, string department, string rank) {
    changeName(first_Name, last_Name);
    changeDepartment(department);
    changeRank(rank);
}

string Professor::getProfessorInfo() {
    return "despair";
}