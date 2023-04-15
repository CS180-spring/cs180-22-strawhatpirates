#include <iostream>
using namespace std;

int printMenu();
int sortMenu();

int main()
{
	int a = printMenu();
	cout << "The menu selection is: " << a << endl;
	return 0;
}

int sortMenu()
{
	int menuChoice;
	cout << "6 - Sort by GPA (Ascending order): \n";
	cout << "7 - Sort by GPA (Descending order): \n";
	cout << "8 - Sort by Year Number (Ascending order): \n";
	cout << "9 - Sort by Year Number (Descending order): \n";
	cout << "10 - Sort by SID: \n";
	cout << "11 - Sort by Major: \n";
	cout << "12 - Sort by FIrst Name: \n";
	cout << "13 - Sort by Last Name: \n";
	cin >> menuChoice;

	if(menuChoice >= 6 && menuChoice <= 13)
	{
		return menuChoice;
	}
	return sortMenu();
}

int printMenu()
{
	int menuChoice;

	cout << "1 - Add a student: \n";
	cout << "2 - Print student details: \n";
	cout << "3 - Update a students info: \n";
	cout << "4 - Remove a student: \n";
	cout << "5 - Sort student database: \n";
	cin >> menuChoice;

	if(menuChoice >= 1 && menuChoice <= 4)
	{
		return menuChoice;
	}
	else if(menuChoice == 5)
	{
		return sortMenu();
	}
	else
	{
		;
	}

	return printMenu();
}
