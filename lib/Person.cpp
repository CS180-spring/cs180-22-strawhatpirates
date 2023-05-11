#include "../header/Person.h"
#include "iostream"

using namespace std;

string Person::getName() {
    return name;
}

void Person::changeName(string name) {
    this->name = name;
}
