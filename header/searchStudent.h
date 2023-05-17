#include <iostream>

using namespace std;

void searchStudent(vector<Student> &list)
{
    cout << "\nYou have chosen to search for a student" << endl;

    int choice;

    cout << "1. Search by first name" << endl;
    cout << "2. Search by last name" << endl;
    cout << "3. Search by GPA" << endl;
    cout << "4. Search by SID" << endl;
    cout << "5. Search by Major" << endl;

    cin >> choice;

    if (choice == 1) {
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

}