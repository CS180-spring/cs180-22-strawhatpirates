#include <iostream>
#include <fstream>

using namespace std;

int menu()
{
    int menuChoice;

    do{
        cout << "\nWelcome to the UCR Student Database" << endl;
        cout << "1. Add a person" << endl;
        cout << "2. Delete a person" << endl;
        cout << "3. Edit a person" << endl;
        cout << "4. Sort persons" << endl;
        cout << "5. Search for a person" << endl;
        cout << "6. Switch mode (Default mode is student)"
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