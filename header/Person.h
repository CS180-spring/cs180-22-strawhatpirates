#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
public:

    string getFirstName();
    string getLastName();

    void changeName(string first_Name, string last_Name);

    // string getInfo();

protected:
    string first_Name;
    string last_Name;

};

#endif