#include "../header/JsonInterface.h"
#include <string>

JsonInterface::JsonInterface() {
    mode = true;
}

void JsonInterface::addStudent() {
    string firstName, lastName , GPA, SID, yearNumber, major;
    
    cin.ignore();
    // Get input from user for student info
    cout << "Enter student first name: ";
    getline(cin, firstName);
    cout << "Enter student last name: ";
    getline(cin, lastName);
    cout << "Enter student GPA: ";
    getline(cin, GPA);
    cout << "Enter student ID: ";
    getline(cin, SID);
    cout << "Enter student year number: ";
    getline(cin, yearNumber);
    cout << "Enter student major: ";
    getline(cin, major);
    
    // Create new student object with input values
    Student newStudent(firstName, lastName, GPA, SID, yearNumber, major);
    
    // // Add new student to stuVector
    stuVector.push_back(newStudent);


    if(stuVector.size() == 0) {
        cout << "No students found." << endl;
    }
    else {
        for (int i = 0; i < stuVector.size(); i++) {
            Student student = stuVector[i];
            cout << "\nStudent #" << i + 1 << endl;
            cout << "Name: " << student.getName() << endl;
            cout << "GPA: " << student.getGPA() << endl;
            cout << "SID: " << student.getSID() << endl;
            cout << "Year Number: " << student.getYearNumber() << endl;
            cout << "Major: " << student.getMajor() << endl;
        }
    }
}