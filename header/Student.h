#include "iostream"

using namespace std;

class Student {
public: 

    Student();
    Student(string name, double GPA, int SID, int yearNumber, string major);

    string getName();
    double getGPA();
    int getSID();
    int getYearNumber();
    string getMajor();

    void changeName(string name);
    void changeGPA(double GPA);
    void changeSID(int SID);
    void changeYearNumber(int yearNumber);
    void changeMajor(string major);
    void changeInfo(string name, double GPA, int SID, int yearNumber, string major);

    string getStudentInfo();

private:
    string name;
    double GPA;
    int SID;
    int yearNumber;
    string major;

};