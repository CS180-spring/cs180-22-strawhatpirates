#include <iostream>
#include "Student.h"

using namespace std;

vector<string> readFile()
{
        string fileName;
        ofstream fileC;
        vector<string> info;
        // vector<Student> stu;
        // cout << "Enter the name of the file you want to read: ";
        // cin >> fileName;
        ifstream fin("student1.json");
        json data = json::parse(fin);


        for (int i = 0; i < 4; ++i) {
                // stu.push_back(new Student("ye",
                // data["students"][i].value("GPA", "not found"),
                // data["students"][i].value("Major", "not found"),
                // data["students"][i].value("SID", "not found"),
                // data["students"][i].value("Year", "not found")));

                info.push_back(data["students"][i].value("First Name", "not found") + " " + data["students"][i].value("Last Name", "not found"));
                info.push_back(data["students"][i].value("GPA", "not found"));
                info.push_back(data["students"][i].value("Major", "not found"));
                info.push_back(data["students"][i].value("SID", "not found"));
                info.push_back(data["students"][i].value("Year", "not found"));

                // cout << "First Name: " << data["students"][i].value("First Name", "not found") << endl;
                // cout << "Last Name: " << data["students"][i].value("Last Name", "not found") << endl;
                // cout << "GPA: " << data["students"][i].value("GPA", "not found") << endl;
                // cout << "Major: " << data["students"][i].value("Major", "not found") << endl;
                // cout << "SID: " << data["students"][i].value("SID", "not found") << endl;
                // cout << "Year Number: " << data["students"][i].value("Year", "not found") << endl;
                // cout << endl;
        }

        // return stu;
        return info;
}

vector<Student> readFileStu()
{
        string fileName;
        ofstream fileC;
        vector<Student> info;
        // vector<Student> stu;
        // cout << "Enter the name of the file you want to read: ";
        // cin >> fileName;
        ifstream fin("student1.json");
        json data = json::parse(fin);


        for (int i = 0; i < 4; ++i) {
                // stu.push_back(new Student("ye",
                // data["students"][i].value("GPA", "not found"),
                // data["students"][i].value("Major", "not found"),
                // data["students"][i].value("SID", "not found"),
                // data["students"][i].value("Year", "not found")));
                Student stu;
                stu.changeName(data["students"][i].value("First Name", "not found") + " " + data["students"][i].value("Last Name", "not found"));
                stu.changeGPA(data["students"][i].value("GPA", "not found"));
                stu.changeMajor(data["students"][i].value("Major", "not found"));
                stu.changeSID(data["students"][i].value("SID", "not found"));
                stu.changeYearNumber(data["students"][i].value("Year", "not found"));
                // Student *stu = new Student(data["students"][i].value("First Name", "not found") + " " + data["students"][i].value("Last Name", "not found"),
                //                 data["students"][i].value("GPA", "not found"),
                //                 data["students"][i].value("Major", "not found"),
                //                 data["students"][i].value("SID", "not found"),
                //                 data["students"][i].value("Year", "not found"));

                info.push_back(stu);
                // info.push_back(stu.getGPA());
                // info.push_back(data["students"][i].value("Major", "not found"));
                // info.push_back(data["students"][i].value("SID", "not found"));
                // info.push_back(data["students"][i].value("Year", "not found"));

                // cout << "First Name: " << data["students"][i].value("First Name", "not found") << endl;
                // cout << "Last Name: " << data["students"][i].value("Last Name", "not found") << endl;
                // cout << "GPA: " << data["students"][i].value("GPA", "not found") << endl;
                // cout << "Major: " << data["students"][i].value("Major", "not found") << endl;
                // cout << "SID: " << data["students"][i].value("SID", "not found") << endl;
                // cout << "Year Number: " << data["students"][i].value("Year", "not found") << endl;
                // cout << endl;
        }

        // return stu;
        return info;
}