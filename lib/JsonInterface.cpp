#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include <string>
#include <vector>
#include <cstring>
#include <bits/stdc++.h>
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
    file.open("student2.json");
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

void JsonInterface::searchStudent(vector<Student> &list) {
    cout << "\nYou have chosen to search for a student" << endl;

    int choice;

    cout << "1. Search by first name" << endl;
    cout << "2. Search by last name" << endl;
    cout << "3. Search by GPA" << endl;
    cout << "4. Search by SID" << endl;
    cout << "5. Search by Major" << endl;

    cin >> choice;

    if (choice == 1) {
        cin.ignore();
        string first;
        cout << "Search by name: " << endl;
        cout << "First Name: " << endl;
        getline(cin, first);

        string upperFirst;
        upperFirst = first;
        transform(upperFirst.begin(), upperFirst.end(), upperFirst.begin(), ::toupper);

        vector<Student> firstNames;

        for (int i = 0; i < list.size(); ++i) {
            string firstName = list[i].getFirstName();
            transform(firstName.begin(), firstName.end(), firstName.begin(), ::toupper);
            if (firstName == upperFirst) {
                firstNames.push_back(list[i]);
            } 
        }


        cout << "\nList of students with first name:" << first << endl << endl;
        if (firstNames.size() != 0) {
            for (int i = 0; i < firstNames.size(); ++i) {
                cout << firstNames[i].getStudentInfo() << endl << endl;
            }
        } else {
            cout << "Student not found!" << endl;
        }
        
    }
}