#include <iostream>
#include <fstream>

using namespace std;

bool mode = true;

int menu()
{
    int menuChoice;

    do{
        cout << "\nWelcome to the UCR " <<  (mode ? "Student" : "Teacher") <<  " Database" << endl;
        cout << "1. Add a " << (mode ? "student" : "teacher") << endl;
        cout << "2. Delete a " << (mode ? "student" : "teacher") << endl;
        cout << "3. Edit a " << (mode ? "student" : "teacher") << endl;
        cout << "4. Sort " << (mode ? "students" : "teachers") << endl;
        cout << "5. Search for a " << (mode ? "student" : "teacher") << endl;
        cout << "6. Switch mode" << endl;
        cout << "7. Print all " << (mode ? "students" : "teachers") <<  endl;
        cout << "8. Exit" << endl;
        cout << "Enter your selection: ";

        cin >> menuChoice;
        
        if(!cin)
        {
            cout << "\nInvalid selection" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if(menuChoice == 6) {
            mode = !mode;
        }
        else if (menuChoice < 1 || menuChoice > 8)
                cout << "\nInvalid selection" << endl;
    }while(menuChoice < 1 || menuChoice > 8);

    return menuChoice;
}