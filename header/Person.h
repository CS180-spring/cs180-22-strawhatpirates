#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <regex>

using namespace std;

class Person {
public:

    Person();
    Person(string firstName, string lastName);

    string getName();
    string getFirstName();
    string getLastName();

    void changeName(string firstName, string lastName);
    void changeFirstName(string firstName);
    void changeLastName(string lastName);

    // string getInfo();

    bool firstNameIsValid(string firstName);
    bool lastNameIsValid(string lastName);
    bool nameIsValid(string firstName, string lastName);

protected:
    string firstName;
    string lastName;

};

#endif