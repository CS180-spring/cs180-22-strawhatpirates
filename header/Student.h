#include "iostream"
#include "Person.h"

using namespace std;

class Student : public Person {
public: 

    Student();
    Student(string first_Name, string last_Name, string GPA, string SID, string yearNumber, string major);

    // string getName();
    string getGPA();
    string getSID();
    string getYearNumber();
    string getMajor();

    // void changeName(string name);
    void changeGPA(string GPA);
    void changeSID(string SID);
    void changeYearNumber(string yearNumber);
    void changeMajor(string major);
    void changeInfo(string first_Name, string last_Name, string GPA, string SID, string yearNumber, string major);

    string getStudentInfo();

private:
    string first_Name;
    string last_Name;
    string GPA;
    string SID;
    string yearNumber;
    string major;
};