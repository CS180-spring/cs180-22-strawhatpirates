#include <iostream>
#include <fstream>
#include "../lib/json.hpp"

using namespace nlohmann;
using namespace std;

void addStudent()
{
    cout << "\nYou have chosen to add a student" << endl;

    string firstName;
    string lastName;
    string major;
    string year;
    double gpa;
    int sid;

    string fileName;
    ofstream fileC;
    

    cout << "Enter the name of the file you want to open: ";
    cin >> fileName;
    // fileC.open(fileName);

    cout << "Enter the student's first name: ";
    cin >> firstName;
    cout << "Enter the student's last name: ";
    cin >> lastName;
    cout << "Enter the student's major: ";
    cin >> major;
    cout << "Enter the student's year: ";
    cin >> year;
    cout << "Enter the student's GPA: ";
    cin >> gpa;
    cout << "Enter the student's SID: ";
    cin >> sid;

    //create an empty structure (null)
    json j = {
    {"First name:", firstName},
    {"Last name:", lastName},
    {"GPA:", gpa},
    {"Major:", major},
    {"SID:", sid},
    {"Year:", year}
    };

    //prints out the json object with 4 spaces
    std::cout << j.dump(4) << std::endl;

    ofstream o(fileName);
    o << setw(4) << j << std::endl;


}