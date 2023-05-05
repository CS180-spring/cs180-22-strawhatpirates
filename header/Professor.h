#include "iostream"
#include "Person.h"

using namespace std;

class Professor : public Person {
public: 

    Professor();
    Professor(string name, string department, string rank);

    // string getName();
    // double getGPA();
    // int getSID();
    // int getYearNumber();
    // string getMajor();
    string getDepartment();
    string getRank();


    // void changeName(string name);
    // void changeGPA(double GPA);
    // void changeSID(int SID);
    // void changeYearNumber(int yearNumber);
    // void changeMajor(string major);
    void changeInfo(string name, string department, string rank);
    void changeDepartment(string department);
    void changeRank(string rank);

    string getProfessorInfo();

private:
    // string name;
    // double GPA;
    // int SID;
    // int yearNumber;
    // string major;
    string department;
    string rank;

};