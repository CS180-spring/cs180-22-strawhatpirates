#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include <string>
#include <vector>
#include "../header/JsonInterface.h"

JsonInterface::JsonInterface() {
    mode = true;
}

void JsonInterface::addStudent(vector<Student> &dataStu) {
    string firstName, lastName , GPA, SID, yearNumber, major;
    
    cout << "----------------------------------------" << endl;
    cout << "\nCurrent students: " << endl;
    for (int i = 0; i < dataStu.size(); ++i) {
        Student student = dataStu[i];
        cout << "\nStudent #" << i + 1 << endl;
        cout << "Name: " << student.getName() << endl;
        cout << "GPA: " << student.getGPA() << endl;
        cout << "Major: " << student.getMajor() << endl;
        cout << "SID: " << student.getSID() << endl;
        cout << "Year: " << student.getYearNumber() << endl;
        
    }

    cin.ignore();
    // Get input from user for student info
    cout << "Enter student first name: ";
    getline(cin, firstName);
    cout << "Enter student last name: ";
    getline(cin, lastName);
    cout << "Enter student GPA: ";
    getline(cin, GPA);
    cout << "Enter student major: ";
    getline(cin, major);
    cout << "Enter student ID: ";
    getline(cin, SID);
    cout << "Enter student year number: ";
    getline(cin, yearNumber);

    
    // Create new student object with input values
    // Student s = Student(firstName, lastName, GPA, SID, yearNumber, major);
    Student newStudent(firstName, lastName, GPA, major, SID, yearNumber);
    
    // // Add new student to stuVector
    dataStu.push_back(newStudent);

    // Write new student to file
    ofstream file;
    file.open("student1.json");
    file << "{\n\t\"students\": [\n";
    for (int i = 0; i < dataStu.size(); i++) {
        file << "\t\t{\n";
        file << "\t\t\t\"First Name\": \"" << dataStu[i].getFirstName() << "\",\n";
        file << "\t\t\t\"Last Name\": \"" << dataStu[i].getLastName() << "\",\n";
        file << "\t\t\t\"GPA\": \"" << dataStu[i].getGPA() << "\",\n";
        file << "\t\t\t\"Major\": \"" << dataStu[i].getMajor() << "\",\n";
        file << "\t\t\t\"SID\": \"" << dataStu[i].getSID() << "\",\n";
        file << "\t\t\t\"Year\": \"" << dataStu[i].getYearNumber() << "\"\n";

        if(i == dataStu.size() - 1) {
            file << "\t\t}\n";
        }
        else {
            file << "\t\t},\n";
        }
    }
    file << "\t]\n}";
    file.close();

    // if(dataStu.size() == 0) {
    //     cout << "No students found." << endl;
    // }
    // else {
    //     for (int i = 0; i < dataStu.size(); ++i) {
    //         Student student = dataStu[i];
    //         cout << "\nStudent #" << i + 1 << endl;
    //         cout << "Name: " << student.getName() << endl;
    //         cout << "GPA: " << student.getGPA() << endl;
    //         cout << "SID: " << student.getSID() << endl;
    //         cout << "Year Number: " << student.getYearNumber() << endl;
    //         cout << "Major: " << student.getMajor() << endl;
    //     }
    // }
}

void JsonInterface::removeStudent(string SID)
{
    string fileName;
    ofstream fileC;
    ifstream fin("student1.json");
    json data = json::parse(fin);

    cout << "\nYou have chosen to delete a student" << endl;
    vector<Student> theInfo = readFileStu();

    for(int i = 0; i < theInfo.size(); ++i)
    {
        if(theInfo.at(i).getSID().compare(SID) == 0)
        {
            theInfo.erase(theInfo.begin() + i);
            i += theInfo.size();
        }
    }
    data.clear();

    this->addStudent(theInfo);
    return;
}