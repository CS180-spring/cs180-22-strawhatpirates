#include "../header/Person.h"
#include "iostream"

using namespace std;

Person::Person() {
    firstName = "";
    lastName = "";
}

Person::Person(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}

string Person::getName() {
    return firstName +  " " + lastName;
}

void Person::changeName(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}

void Person::changeFirstName(string firstName) {
    this->firstName = firstName;
}

void Person::changeLastName(string lastName) {
    this->lastName = lastName;
}
