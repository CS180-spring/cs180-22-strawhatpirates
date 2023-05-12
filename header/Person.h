#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
public:

    string getName();
    string getFirstName();
    string getLastName();

    void changeName(string firstName, string lastName);
    void changeFirstName(string firstName);
    void changeLastName(string lastName);

    // string getInfo();

protected:
    string firstName;
    string lastName;

};

#endif