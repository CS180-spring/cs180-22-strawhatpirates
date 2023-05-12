#include "iostream"
#include "Person.h"

using namespace std;

class Professor : public Person {
public: 

    Professor();
    Professor(string first_Name, string last_Name, string department, string rank);

    string getDepartment();
    string getRank();

    void changeInfo(string first_Name, string last_Name, string department, string rank);
    void changeDepartment(string department);
    void changeRank(string rank);

    string getProfessorInfo();

private:
    string department;
    string rank;

};