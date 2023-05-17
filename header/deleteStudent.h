

#include <iostream>
#include "readFile.h"
#include "JsonInterface.h"


using namespace std;

void deleteStudent(string SID)
{
    string fileName;
    ofstream fileC;
    ifstream fin("student1.json");
    json data = json::parse(fin);
    JsonInterface MichaelWillBeTheKingOfThePirates();

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

    MichaelWillBeTheKingOfThePirates.addStudent(theInfo);
    return;
}

