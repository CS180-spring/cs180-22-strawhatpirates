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
    // Student s = Student(firstName, lastName, GPA, SID, yearNumber, major);
    Student newStudent(firstName, lastName, GPA, SID, yearNumber, major);

    cout << newStudent.getStudentInfo() << endl;
    
    // // Add new student to stuVector
    dataStu.push_back(newStudent);

    // Write new student to file
    ofstream file;
    file.open("student2.json");
    file << "{\n\t\"students\": [\n";
    for (int i = 0; i < dataStu.size(); ++i) {
        file << "\t\t{\n";
        file << "\t\t\t\"First Name\": \"" << dataStu[i].getFirstName() << "\",\n";
        file << "\t\t\t\"Last Name\": \"" << dataStu[i].getLastName() << "\",\n";
        file << "\t\t\t\"GPA\": \"" << dataStu[i].getGPA() << "\",\n";
        file << "\t\t\t\"SID\": \"" << dataStu[i].getSID() << "\",\n";
        file << "\t\t\t\"Year Number\": \"" << dataStu[i].getYearNumber() << "\",\n";
        file << "\t\t\t\"Major\": \"" << dataStu[i].getMajor() << "\"\n";
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