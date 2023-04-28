#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int printMenu();
int sortMenu();

//add an entry into a JSON file
int addEntry()
{
	string name;
	string lastName;
	string major;
	string year;
	string gpa;
	string sid;
	string data;
	fstream file;
	file.open("student1.json", ios::app);
	cout << "Enter the student's name: ";
	cin >> name;
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
	file << "{\n";
	file << "\t\"First Name\": \"" << name << "\",\n";
	file << "\t\"Last Name\": \"" << lastName << "\",\n";
	file << "\t\"GPA\": \"" << gpa << "\",\n";
	file << "\t\"Major\": \"" << major << "\",\n";
	file << "\t\"SID\": \"" << sid << "\",\n";
	file << "\t\"Year\": \"" << year << "\"\n";
	file << "},\n";
	file.close();
	return 0;
}

int main()
{
	int a = printMenu();
	cout << "The menu selection is: " << a << endl;
	if(a == 1)
	{
		addEntry();
	}
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

	return printMenu();
}