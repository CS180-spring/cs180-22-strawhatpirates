#include "../header/Person.h"
#include <iostream>

using namespace std;

string Person::getFirstName() {
    return first_Name;
}

string Person::getLastName()
{
    return last_Name
}

void Person::changeName(string first_Name, string last_Name) {
    this->first_Name = first_Name;
    this->last_Name = last_Name;
}
