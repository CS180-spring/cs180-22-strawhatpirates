#include <iostream>
#include <fstream>

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