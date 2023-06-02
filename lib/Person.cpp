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

string Person::getFirstName() {
    return firstName;
}

string Person::getLastName() {
    return lastName;
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

bool Person::firstNameIsValid(string firstName) {
    return std::regex_match (firstName, std::regex("^[A-Z]+\\w+[a-z]$"));
}

bool Person::lastNameIsValid(string lastName) {
    return std::regex_match (lastName, std::regex("^[A-Z]+\\w+[a-z]$"));
}

bool Person::nameIsValid(string firstName, string lastName) {
    return firstNameIsValid(firstName) && lastNameIsValid(lastName);
}