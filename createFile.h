#include <iostream>
#include <fstream>

using namespace std;

void createFile()
{
    cout << "\nYou have chosen to create a new file" << endl;

    string fileName;
    ofstream fileC;
    cout << "Enter the name of the file you want to create: ";
    cin >> fileName;
    fileName += ".json";
    fileC.open(fileName);
    fileC.close();

}