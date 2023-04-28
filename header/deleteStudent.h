#include <iostream>

using namespace std;

void deleteStudent(string SID)
{
    cout << "\nYou have chosen to delete a student" << endl;
    string fileName;
    ofstream fileC;
    // cout << "Enter the name of the file you want to read: ";
    // cin >> fileName;
    ifstream fin("student1.json");
    json data = json::parse(fin);

    cout << "\nYou have chosen to delete a student" << endl;
    string currentSID = data.value("SID", "not found");
    while(SID.compare(currentSID) != 0)
    {
        //currentSID = next value
    }

    data.erase(SID);

    return;

}