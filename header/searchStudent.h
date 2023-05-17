#include <iostream>

using namespace std;

void searchStudent(vector<Student> list)
{
    cout << "\nYou have chosen to search for a student" << endl;

    string first;
    string last;
    cout << "Search by name: " << endl;
    cout << "First Name: " << endl;
    getline(cin, first);
    
    cout << "Last Name: " << endl;
    getline(cin, last);


    for (int i = 0; i < list.size(); ++i) {
        if (list[i].getFirstName() == first && list[i].getLastName() == last) {
            cout << list[i].getFirstName() << endl;
            cout << list[i].getLastName() << endl;
            cout << list[i].getGPA() << endl;
            cout << list[i].getSID() << endl;
            cout << list[i].getYearNumber() << endl;
            cout << list[i].getMajor() << endl;
        } else {
            cout << "Student not found!" << endl;
        }
    }

}