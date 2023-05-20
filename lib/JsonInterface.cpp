#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include <string>
#include <vector>
#include <cstring>
#include "../header/JsonInterface.h"
#include "../lib/json.hpp"

using namespace std;
using json = nlohmann::json;

JsonInterface::JsonInterface() {
    this->mode = true;
}

void JsonInterface::addStudent() {
    vector<Student> dataStu = readFileStu();
    string firstName, lastName , GPA, SID, yearNumber, major;

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
    Student newStudent(firstName, lastName, GPA, major, SID, yearNumber);
    
    // // Add new student to stuVector
    dataStu.push_back(newStudent);

    writeFileStu(dataStu);
    printStudents();
}

void JsonInterface::searchStudent() {

    vector<Student> dataStu = readFileStu();
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

        for (int i = 0; i < dataStu.size(); ++i) {
            string firstName = dataStu[i].getFirstName();
            transform(firstName.begin(), firstName.end(), firstName.begin(), ::toupper);
            if (firstName == upperFirst) {
                firstNames.push_back(dataStu[i]);
            } 
        }

        cout << "\nList of students with first name:" << first << endl << endl;
        if (firstNames.size() != 0) {
            for (int i = 0; i < firstNames.size(); ++i) {
                cout << firstNames[i].getInfo() << endl << endl;
            }
        } else {
            cout << "Student not found!" << endl;
        }
        
    }
}

void JsonInterface::removeStudent()
{
    bool found = false;
    string SID;
    vector<Student> dataStu = readFileStu();

    cout << "\nYou have chosen to delete a student" << endl;

    printStudents();
    
    cout << "\nEnter the SID of the student to remove: ";
    cin.ignore();
    getline(cin, SID);

    for(int i = 0; i < dataStu.size(); ++i)
    {
        if(dataStu.at(i).getSID().compare(SID) == 0)
        {
            dataStu.erase(dataStu.begin() + i);
            i += dataStu.size();
            found = true;
        }
    }

    if(found == false)
    {
        cout << "The chosen SID was not found!!! \n";
    }

    writeFileStu(dataStu);
    return;
}


//void JsonInterface::updateStudent(string SID, vector<Student> stussy) {

//	int i, choice;


    //while(done) {
    //switch (data)
    //                case 1: cout << "Name:";
	//						cin >> p[i].name;
	//						cout << "Name Updated...\n";
    //						break;
   	//				case 2: cout << "GPA:";
   	//						cin >> p[i].gpa;
   	//						cout << "GPA Updated...\n";
   	//						break; 					
	//				case 3: cout << "Major:";
	//						cin >> p[i].major;
	//						cout << "Major Updated...\n";
	//						break;
	//				case 4: cout << "SID:";
	//						cin >> p[i].sid;
	//						cout << "SID Updated...\n";
	//						break;
	//				case 5: cout << "Year:";
	//						cin >> p[i].year;
	//						cout << "Year Updated...\n";
	//						break;
	//				case 6: 
	//				
	//				default: cout << "Invalid Input:";
	//				break;
	//				}
	//	
    //    }

void JsonInterface::writeFileStu(vector<Student> dataStu)
{
    ofstream file;
    file.open("student1.json");
    file << "{\n\t\"students\": [\n";
    for (int i = 0; i < dataStu.size(); i++) 
    {
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
}

vector<Student> JsonInterface::readFileStu()
{
        string fileName;
        ofstream fileC;
        vector<Student> info;
        ifstream fin("student1.json");
        json data = json::parse(fin);

        int stuSize = data["students"].size();

        for (int i = 0; i < stuSize; ++i) {
                Student stu (data["students"][i].value("First Name", "not found"), 
                                data["students"][i].value("Last Name", "not found"),
                                data["students"][i].value("GPA", "not found"),
                                data["students"][i].value("Major", "not found"),
                                data["students"][i].value("SID", "not found"),
                                data["students"][i].value("Year", "not found"));

                info.push_back(stu);
        }

        // return stu;
        return info;
}

vector<Professor> JsonInterface::readFileProf()
{
        string fileName;
        ofstream fileC;
        vector<Professor> info;
        ifstream fin("professor.json");
        json data = json::parse(fin);

        int profSize = data["professors"].size();

        for (int i = 0; i < profSize; ++i) {
                Professor prof (data["professors"][i].value("First Name", "not found"), 
                                data["professors"][i].value("Last Name", "not found"),
                                data["professors"][i].value("Department", "not found"),
                                data["professors"][i].value("Rank", "not found"));

                info.push_back(prof);
        }

        // return stu;
        return info;
}

void JsonInterface::printStudents() {

    vector<Student> dataStu = readFileStu();
    for (int i = 0; i < dataStu.size(); ++i) {
        cout << dataStu[i].getInfo() << endl << endl;
    }
}

void JsonInterface::printProfessors() {

    vector<Professor> dataProf = readFileProf();
    for (int i = 0; i < dataProf.size(); ++i) {
        cout << dataProf[i].getInfo() << endl << endl;
    }
}

void JsonInterface::changeMode() {
    mode = !mode;
}

bool JsonInterface::getMode() {
    return mode;
}