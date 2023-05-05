#ifndef PERSON_H
#define PERSON_H

#include "iostream"

using namespace std;

class Person {
public:

    string getName();

    void changeName(string name);

    // string getInfo();

protected:
    string name;

};

#endif