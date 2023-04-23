#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include "json-develop/single_include/nlohmann/json.hpp"

using namespace nlohmann;
using namespace std;

int menu()
{
    int menuChoice;

    do{
        cout << "\nWelcome to the UCR Student Database" << endl;
        cout << "1. Add a student" << endl;
        cout << "2. Delete a student" << endl;
        cout << "3. Edit a student" << endl;
        cout << "4. Sort students" << endl;
        cout << "5. Search for a student" << endl;
        cout << "6. Create a new file" << endl;
        cout << "7. Read a file" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your selection: ";

        cin >> menuChoice;
        
        if(!cin){
            cout << "\nInvalid selection" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (menuChoice < 1 || menuChoice > 8)
                cout << "\nInvalid selection" << endl;
        

    }while(menuChoice < 1 || menuChoice > 8);

    return menuChoice;
    
}

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
    fileC.open(fileName);

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

    std::cout << j.dump(4) << std::endl;
    fileC << j;
    
    fileC.close();

    ofstream o(fileName);
    o << setw(4) << j << std::endl;


}

void deleteStudent()
{
    cout << "\nYou have chosen to delete a student" << endl;
}

void editStudent()
{
    cout << "\nYou have chosen to edit a student" << endl;
}

void sortStudent()
{
    cout << "\nYou have chosen to sort students" << endl;
}

void searchStudent()
{
    cout << "\nYou have chosen to search for a student" << endl;
}

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

void readFile()
{
    // string fileName;
    // ofstream fileC;
    // cout << "Enter the name of the file you want to read: ";
    // cin >> fileName;
    // ifstream i(fileName);
    // json j;
    // i >> j;
    // cout << j.dump(4) << endl;

}

int main()
{
    do{
        int a = menu();

        if(a == 1)
            addStudent();
        else if(a == 2)
            deleteStudent();
        else if(a == 3)
            editStudent();
        else if(a == 4)
            sortStudent();
        else if(a == 5)
            searchStudent();
        else if(a == 6)
            createFile();
        else if(a == 7)
            readFile();
        else if(a == 8)
            exit(0);   
    }while(true);

    return 0;
}