#include "../header/JsonInterface.h"

using namespace std;
using json = nlohmann::json;

JsonInterface::JsonInterface() {
    this->mode = true;
}

void JsonInterface::writeFileStu(vector<Student> dataStu)
{
    ofstream file;
    file.open("student1.json");
    file << "{\n\t\"students\": [\n";
    for (int i = 0; i < dataStu.size(); i++) 
    {
        file << "\t\t{\n";
        file << "\t\t\t\"First Name\": \"" << dataStu[i].getFirstName() << "\",\n";
        file << "\t\t\t\"Last Name\": \"" << dataStu[i].getLastName() << "\",\n";
        file << "\t\t\t\"GPA\": \"" << dataStu[i].getGPA() << "\",\n";
        file << "\t\t\t\"Major\": \"" << dataStu[i].getMajor() << "\",\n";
        file << "\t\t\t\"SID\": \"" << dataStu[i].getSID() << "\",\n";
        file << "\t\t\t\"Year\": \"" << dataStu[i].getYearNumber() << "\"\n";

        if(i == dataStu.size() - 1) {
            file << "\t\t}\n";
        }
        else {
            file << "\t\t},\n";
        }
    }
    file << "\t]\n}";
    file.close();
}

void JsonInterface::writeFileProf(vector<Professor> dataProf) {

}

vector<Student> JsonInterface::readFileStu()
{
        string fileName;
        ofstream fileC;
        vector<Student> info;
        ifstream fin("student1.json");
        json data = json::parse(fin);

        int stuSize = data["students"].size();

        for (int i = 0; i < stuSize; ++i) {
                Student stu (data["students"][i].value("First Name", "not found"), 
                                data["students"][i].value("Last Name", "not found"),
                                data["students"][i].value("GPA", "not found"),
                                data["students"][i].value("Major", "not found"),
                                data["students"][i].value("SID", "not found"),
                                data["students"][i].value("Year", "not found"));

                info.push_back(stu);
        }

        // return stu;
        return info;
}

vector<Professor> JsonInterface::readFileProf()
{
        string fileName;
        ofstream fileC;
        vector<Professor> info;
        ifstream fin("professor.json");
        json data = json::parse(fin);

        int profSize = data["professors"].size();

        for (int i = 0; i < profSize; ++i) {
                Professor prof (data["professors"][i].value("First Name", "not found"), 
                                data["professors"][i].value("Last Name", "not found"),
                                data["professors"][i].value("Department", "not found"),
                                data["professors"][i].value("Rank", "not found"),
                                data["professors"][i].value("EID", "not found"));

                info.push_back(prof);
        }

        // return stu;
        return info;
}

void JsonInterface::uppercaseStrings(string &firstName, string &lastName, string &major) {
    transform(firstName.begin(), firstName.end(), firstName.begin(), ::toupper);
    transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
    transform(major.begin(), major.end(), major.begin(), ::toupper);
}

void JsonInterface::add() {
    (mode ? addStudent() : addProfessor());
}

void JsonInterface::addStudent() {
    vector<Student> dataStu = readFileStu();
    string firstName, lastName , GPA, SID, yearNumber, major;

    cin.ignore();
    // Get input from user for student info
    cout << "Enter student first name: ";
    getline(cin, firstName);
    cout << "Enter student last name: ";
    getline(cin, lastName);
    cout << "Enter student GPA: ";
    getline(cin, GPA);
    cout << "Enter student major: ";
    getline(cin, major);
    cout << "Enter student ID: ";
    getline(cin, SID);
    cout << "Enter student year number: ";
    getline(cin, yearNumber);

    
    // Create new student object with input values
    Student newStudent(firstName, lastName, GPA, major, SID, yearNumber);
    
    // // Add new student to stuVector
    dataStu.push_back(newStudent);

    writeFileStu(dataStu);
    printStudents(dataStu);
}

void JsonInterface::addProfessor() {
    
}

void JsonInterface::sort() {
    (mode ? sortStudent() : sortProfessor());
}

void JsonInterface::sortStudent()
{
    vector<Student> dataStu = readFileStu();
    cout << "\nYou have chosen to sort students" << endl;

    int choice;

    cout << "1. Sort by first name" << endl;
    cout << "2. Sort by last name" << endl;
    cout << "3. Sort by GPA" << endl;
    cout << "4. Sort by SID" << endl;
    cout << "5. Sort by Major" << endl;
    cout << "Enter your selection: ";
    cin >> choice;

    Student temp;
    int i;
    int j;

    if (choice == 1) {
        cout << "You have chosen to sort by first name." << endl;
        for (i = 0; i < dataStu.size(); i++) {
            for (j = i + 1; j < dataStu.size(); j++) {
                if (dataStu[j].getFirstName() < dataStu[i].getFirstName()) {
                    temp = dataStu[i];
                    dataStu[i] = dataStu[j];
                    dataStu[j] = temp;
                }
            }
        }
    }
    
    if (choice == 2) {
        cout << "You have chosen to sort by last name." << endl;
        for (i = 0; i < dataStu.size(); i++) {
            for (j = i + 1; j < dataStu.size(); j++) {
                if (dataStu[j].getLastName() < dataStu[i].getLastName()) {
                    temp = dataStu[i];
                    dataStu[i] = dataStu[j];
                    dataStu[j] = temp;
                }
            }
        }
    }

    if (choice == 3) {
        cout << "You have chosen to sort by GPA." << endl;
        for (i = 0; i < dataStu.size(); i++) {
            for (j = i + 1; j < dataStu.size(); j++) {
                if (dataStu[j].getGPA() < dataStu[i].getGPA()) {
                    temp = dataStu[i];
                    dataStu[i] = dataStu[j];
                    dataStu[j] = temp;
                }
            }
        }
    }

    if (choice == 4) {
        cout << "You have chosen to sort by SID." << endl;
        for (i = 0; i < dataStu.size(); i++) {
            for (j = i + 1; j < dataStu.size(); j++) {
                if (dataStu[j].getSID() < dataStu[i].getSID()) {
                    temp = dataStu[i];
                    dataStu[i] = dataStu[j];
                    dataStu[j] = temp;
                }
            }
        }
    }
    
    if (choice == 5) {
        cout << "You have chosen to sort by major." << endl;
        for (i = 0; i < dataStu.size(); i++) {
            for (j = i + 1; j < dataStu.size(); j++) {
                if (dataStu[j].getMajor() < dataStu[i].getMajor()) {
                    temp = dataStu[i];
                    dataStu[i] = dataStu[j];
                    dataStu[j] = temp;
                }
            }
        }
    }
    writeFileStu(dataStu);
}

void JsonInterface::sortProfessor() {

}

void JsonInterface::search() {
    (mode ? searchStudent() : searchProfessor());
}

void JsonInterface::searchStudent() {

    vector<Student> dataStu = readFileStu();
    cout << "\nYou have chosen to search for a student" << endl;

    int choice;

    cout << "1. Search by first name" << endl;
    cout << "2. Search by last name" << endl;
    cout << "3. Search by GPA" << endl;
    cout << "4. Search by SID" << endl;
    cout << "5. Search by Major" << endl;
    cout << "6. Search by Year" << endl;

    cin >> choice;
    cout << endl;

    if (choice == 1) {
        cin.ignore();
        string first;

        cout << "Search by First Name: ";
        getline(cin, first);

        string upperFirst;
        upperFirst = first;
        transform(upperFirst.begin(), upperFirst.end(), upperFirst.begin(), ::toupper);

        vector<Student> firstNames;

        for (int i = 0; i < dataStu.size(); ++i) {
            string firstName = dataStu[i].getFirstName();
            transform(firstName.begin(), firstName.end(), firstName.begin(), ::toupper);
            if (firstName == upperFirst) {
                firstNames.push_back(dataStu[i]);
            } 
        }

        cout << "\nList of students with first name: " << first << endl;
        if (firstNames.size() != 0) {
            printStudents(firstNames);
        } else {
            cout << "Student not found!" << endl;
        }
        
    }

    if (choice == 2) {
        cin.ignore();
        string last;
        cout << "Search by Last Name: ";
        getline(cin, last);

        string upperLast;
        upperLast = last;
        transform(upperLast.begin(), upperLast.end(), upperLast.begin(), ::toupper);

        vector<Student> lastNames;

        for (int i = 0; i < dataStu.size(); ++i) {
            string lastName = dataStu[i].getLastName();
            transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
            if (lastName == upperLast) {
                lastNames.push_back(dataStu[i]);
            } 
        }

        cout << "\nList of students with last name: " << last << endl;
        if (lastNames.size() != 0) {
            printStudents(lastNames);
        } else {
            cout << "Student not found!" << endl;
        }
    }

    if (choice == 3) {
        cin.ignore();

        //search by range or specific GPA
        int choice1;
        cout << "1. Search GPA by range." << endl;
        cout << "2. Search specific GPA." << endl;
        cin >> choice1;
        cout << endl;

        if (choice1 == 1) {
            cin.ignore();
            cout << "Searching GPA by range" << endl << endl;

            double bot, top;
            cout << "Enter bottom range: ";
            cin >> bot;
            cin.clear();
            cout << "Enter top range: ";
            cin >> top;

            vector<Student> GPAs;

            for (int i = 0; i < dataStu.size(); ++i) {
                double gpa = stod(dataStu[i].getGPA());
                if (bot <= gpa && gpa <= top) {
                    GPAs.push_back(dataStu[i]);
                }
            }

            cout << "\nList of students with GPA between " << bot << "-" << top << ":" << endl;
            if (GPAs.size() != 0) {
                printStudents(GPAs);
            } else {
                cout << "Student not found!" << endl;
            }
        }

        if (choice1 == 2) {
            cin.ignore();
            cout << "Searching by specific GPA" << endl;

            string GPA;
            cout << "Search by GPA: ";
            getline(cin, GPA);

            //check GPA format
            //no decimal
            int format = -1;
            for (int i = 0; i < GPA.length(); ++i) {
                if (GPA[i] != '.') {
                    format = 0;
                }
            }
            if (GPA.length() == 3) {
                format = 1;
            }
            if (GPA.length() == 4) {
                format = 2;
            }
            
            vector<Student> GPAs;

            //no decimal
            if (format == 0) {
                for (int i = 0; i < dataStu.size(); ++i) {
                    string gpa = dataStu[i].getGPA();
                    if (gpa[0] == GPA[0]) {
                        GPAs.push_back(dataStu[i]);
                    }
                }
            }

            //1 decimal
            if (format == 1) {
                for (int i = 0; i < dataStu.size(); ++i) {
                    string gpa = dataStu[i].getGPA();
                    if (gpa.substr(0, 3) == GPA.substr(0, 3)) {
                        GPAs.push_back(dataStu[i]);
                    }
                }
            }

            if (format == 2) {
                for (int i = 0; i < dataStu.size(); ++i) {
                    string gpa = dataStu[i].getGPA();
                    if (gpa == GPA) {
                        GPAs.push_back(dataStu[i]);
                    }
                }
            }


            cout << "\nList of students with GPA:" << GPA << endl;
            if (GPAs.size() != 0) {
                printStudents(GPAs);
            } else {
                cout << "Student not found!" << endl;
            }
        }
    }

    if (choice == 4) {
        cin.ignore();
        cout << "Search by SID: ";
        
        string SID;
        getline(cin, SID);

        vector<Student> SIDs;

        for (int i = 0; i < dataStu.size(); ++i) {
            string sid = dataStu[i].getSID();
            if (sid == SID) {
                SIDs.push_back(dataStu[i]);
            } 
        }

        cout << "\nList of students with SID: " << SID << endl;
        if (SIDs.size() != 0) {
            printStudents(SIDs);
        } else {
            cout << "Student not found!" << endl;
        }
    }

    if (choice == 5) {
        cin.ignore();
        cout << "Search by Major: " << endl;

        vector<string> majorList{"BIOL","CHEM", "BSNS", "PHYS", "CEN", "CS", "EDU", "ENGL",
                                "HIST", "MATH", "PSY", "POLS", "PHIL", "ART", "MUS"};
        for (int i = 1; i < majorList.size() + 1; ++i) {
            cout << i << ". " << majorList[i - 1] << endl;
        }

        string major;
        getline(cin, major);

        vector<Student> majors;

        for (int i = 0; i < dataStu.size(); ++i) {
            string m = dataStu[i].getMajor();
            if (m == majorList[stoi(major) - 1]) {
                majors.push_back(dataStu[i]);
            }
        }

        cout << "\nList of students with major: " << majorList[stoi(major) - 1] << endl;
        if (majors.size() != 0) {
            printStudents(majors);
        } else {
            cout << "Student not found!" << endl;
        }
    }

    if (choice == 6) {
        cin.ignore();
        cout << "Search by Year: " << endl;

        string year;
        getline(cin, year);

        vector<Student> years;

        for (int i = 0; i < dataStu.size(); ++i) {
            string y = dataStu[i].getYearNumber();
            if (y == year) {
                years.push_back(dataStu[i]);
            }
        }

        cout << "\nList of students with year number: " << year << endl;
        if (years.size() != 0) {
            printStudents(years);
        } else {
            cout << "Student not found!" << endl;
        }
    }


}

void JsonInterface::searchProfessor() {
    vector<Professor> dataProf = readFileProf();
    cout << "\nYou have chosen to search for a professor" << endl;

    int choice;

    cout << "1. Search by first name" << endl;
    cout << "2. Search by last name" << endl;
    cout << "3. Search by department" << endl;
    cout << "4. Search by rank" << endl;
    cout << "5. Search by EID" << endl;

    cin >> choice;

    if (choice == 1) {
        cin.ignore();
        string first;

        cout << "Search by First Name: ";
        getline(cin, first);

        string upperFirst;
        upperFirst = first;
        transform(upperFirst.begin(), upperFirst.end(), upperFirst.begin(), ::toupper);

        vector<Professor> firstNames;

        for (int i = 0; i < dataProf.size(); ++i) {
            string firstName = dataProf[i].getFirstName();
            transform(firstName.begin(), firstName.end(), firstName.begin(), ::toupper);
            if (firstName == upperFirst) {
                firstNames.push_back(dataProf[i]);
            } 
        }

        cout << "\nList of professors with first name: " << first << endl;
        if (firstNames.size() != 0) {
            printProfessors(firstNames);
        } else {
            cout << "Professor not found!" << endl;
        }
        
    }

    if (choice == 2) {
        cin.ignore();
        string last;
        cout << "Search by Last Name: ";
        getline(cin, last);

        string upperLast;
        upperLast = last;
        transform(upperLast.begin(), upperLast.end(), upperLast.begin(), ::toupper);

        vector<Professor> lastNames;

        for (int i = 0; i < dataProf.size(); ++i) {
            string lastName = dataProf[i].getLastName();
            transform(lastName.begin(), lastName.end(), lastName.begin(), ::toupper);
            if (lastName == upperLast) {
                lastNames.push_back(dataProf[i]);
            } 
        }

        cout << "\nList of professors with last name: " << last << endl;
        if (lastNames.size() != 0) {
            printProfessors(lastNames);
        } else {
            cout << "Professor not found!" << endl;
        }
    }

    if (choice == 3) {
        cin.ignore();
        cout << "Search by Department: " << endl;

        vector<string> depList{"BIOL","CHEM", "BSNS", "PHYS", "CEN", "CS", "EDU", 
                                "ENGL", "HIST", "MATH", "PSY", "POLS", "PHIL", "ART", "MUS"};
        for (int i = 1; i < depList.size() + 1; ++i) {
            cout << i << ". " << depList[i - 1] << endl;
        }

        string dep;
        getline(cin, dep);

        vector<Professor> deps;

        for (int i = 0; i < dataProf.size(); ++i) {
            string d = dataProf[i].getDepartment();
            if (d == depList[stoi(dep) - 1]) {
                deps.push_back(dataProf[i]);
            }
        }

        cout << "\nList of professors with department: " << depList[stoi(dep) - 1] << endl;
        if (deps.size() != 0) {
            printProfessors(deps);
        } else {
            cout << "Professor not found!" << endl;
        }
    }

    if (choice == 4) {
        cin.ignore();
        cout << "Search by Rank: " << endl;

        vector<string> rankList{"Tenure-Track", "Emeritus", "Adjunct", "Cooperating"};
        for (int i = 1; i < rankList.size() + 1; ++i) {
            cout << i << ". " << rankList[i - 1] << endl;
        }

        string rank;
        getline(cin, rank);

        vector<Professor> ranks;

        for (int i = 0; i < dataProf.size(); ++i) {
            string d = dataProf[i].getRank();
            if (d == rankList[stoi(rank) - 1]) {
                ranks.push_back(dataProf[i]);
            }
        }

        cout << "\nList of professors with rank: " << rankList[stoi(rank) - 1] << endl;
        if (ranks.size() != 0) {
            printProfessors(ranks);
        } else {
            cout << "Professor not found!" << endl;
        }

    }

    if (choice == 5) {
        cin.ignore();
        cout << "Search by EID: ";
        
        string EID;
        getline(cin, EID);

        vector<Professor> EIDs;

        for (int i = 0; i < dataProf.size(); ++i) {
            string eid = dataProf[i].getEID();
            if (eid == EID) {
                EIDs.push_back(dataProf[i]);
            } 
        }

        cout << "\nList of professors with EID: " << EID << endl;
        if (EIDs.size() != 0) {
            printProfessors(EIDs);
        } else {
            cout << "Professor not found!" << endl;
        }
    }
}

void JsonInterface::remove() {
    (mode ? removeStudent() : removeProfessor());
}

void JsonInterface::removeStudent()
{
    bool found = false;
    string SID;
    vector<Student> dataStu = readFileStu();

    cout << "\nYou have chosen to delete a student" << endl;

    printStudents(dataStu);
    
    cout << "\nEnter the SID of the student to remove: ";
    cin.ignore();
    getline(cin, SID);

    for(int i = 0; i < dataStu.size(); ++i)
    {
        if(dataStu.at(i).getSID().compare(SID) == 0)
        {
            dataStu.erase(dataStu.begin() + i);
            i += dataStu.size();
            found = true;
        }
    }

    if(found == false)
    {
        cout << "The chosen SID was not found!!! \n";
    }

    writeFileStu(dataStu);
    return;
}

void JsonInterface::removeProfessor() {

}


//void JsonInterface::updateStudent(string SID, vector<Student> stussy) {

//	int i, choice;


    //while(done) {
    //switch (data)
    //                case 1: cout << "Name:";
	//						cin >> p[i].name;
	//						cout << "Name Updated...\n";
    //						break;
   	//				case 2: cout << "GPA:";
   	//						cin >> p[i].gpa;
   	//						cout << "GPA Updated...\n";
   	//						break; 					
	//				case 3: cout << "Major:";
	//						cin >> p[i].major;
	//						cout << "Major Updated...\n";
	//						break;
	//				case 4: cout << "SID:";
	//						cin >> p[i].sid;
	//						cout << "SID Updated...\n";
	//						break;
	//				case 5: cout << "Year:";
	//						cin >> p[i].year;
	//						cout << "Year Updated...\n";
	//						break;
	//				case 6: 
	//				
	//				default: cout << "Invalid Input:";
	//				break;
	//				}
	//	
    //    }

void JsonInterface::print() {
    vector<Student> dataStu = readFileStu();
    vector<Professor> dataProf = readFileProf();
    (mode ? printStudents(dataStu) : printProfessors(dataProf));
}

void JsonInterface::printStudents(vector<Student> data) {

    //table view of students
    cout << "\n----- Student info -----" << endl;
    vector<Student> dataStu = data;
    cout << setw(5) << left << "No.";
    cout << setw(15) << left << "First Name";
    cout << setw(15) << left << "Last Name";
    cout << setw(10) << left << "GPA";
    cout << setw(15) << left << "Major";
    cout << setw(15) << left << "SID";
    cout << setw(10) << left << "Year" << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < dataStu.size(); ++i) {
        cout << setw(5) << left << i + 1;
        cout << setw(15) << left << dataStu.at(i).getFirstName();
        cout << setw(15) << left << dataStu.at(i).getLastName();
        cout << setw(10) << left << dataStu.at(i).getGPA();
        cout << setw(15) << left << dataStu.at(i).getMajor();
        cout << setw(15) << left << dataStu.at(i).getSID();
        cout << setw(10) << left << dataStu.at(i).getYearNumber() << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
    }
}
void JsonInterface::printProfessors(vector<Professor> data) {

    //table view of professors
    cout << "\n----- Professor info -----" << endl;
    vector<Professor> dataProf = data;
    cout << setw(5) << left << "No.";
    cout << setw(15) << left << "First Name";
    cout << setw(15) << left << "Last Name";
    cout << setw(20) << left << "Department";
    cout << setw(25) << left << "Rank";
    cout << setw(30) << left << "EID" << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < dataProf.size(); ++i) {
        cout << setw(5) << left << i + 1;
        cout << setw(15) << left << dataProf.at(i).getFirstName();
        cout << setw(15) << left << dataProf.at(i).getLastName();
        cout << setw(20) << left << dataProf.at(i).getDepartment();
        cout << setw(25) << left << dataProf.at(i).getRank();
        cout << setw(30) << left << dataProf.at(i).getEID() << endl;
        cout << "---------------------------------------------------------------------------------------------" << endl;
    }
}

void JsonInterface::changeMode() {
    mode = !mode;
}

bool JsonInterface::getMode() {
    return mode;
}