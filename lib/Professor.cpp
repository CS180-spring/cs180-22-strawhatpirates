#include "../header/Professor.h"
#include "iostream"

using namespace std;

Professor::Professor() {
    name = "";
    department = "";
    rank = "";
}

Professor::Professor(string name, string department, string rank) {
    this->name = name;
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

void Professor::changeInfo(string name, string department, string rank) {
    changeName(name);
    changeDepartment(department);
    changeRank(rank);
}

string Professor::getProfessorInfo() {
    return "despair";
}