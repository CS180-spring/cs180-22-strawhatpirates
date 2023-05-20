#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include "lib/json.hpp"
#include "header/menu.h"
// #include "header/searchStudent.h"
#include "header/readFile.h"
#include "header/JsonInterface.h"
#include <string>
#include <vector>


using namespace nlohmann;
using namespace std;

int main()
{
    JsonInterface jsonInterface;

    do {
        int a = menu();

        if (a == 1){
            vector<Student> dataStu = readFileStu();
            jsonInterface.addStudent(dataStu);
        }
        else if (a == 2)
        {
            vector<Student> deleteVector = readFileStu();
            string theSID;
            cout << "Enter the SID of the student to remove: \n";
            cin.ignore();
            getline(cin, theSID);
            jsonInterface.removeStudent(theSID, deleteVector);
        }
        else if (a == 3)
            continue;
        else if (a == 4)
            //sortStudent();
            continue;
        else if (a == 5) {
            vector<Student> dataStu = readFileStu();
            jsonInterface.searchStudent(dataStu);
        }
        else if (a == 5)
            continue;
        else if (a == 6)
            continue;
        else if (a == 7) {
            cout << "----- Student info -----" << endl;
            vector<Student> dataStu = readFileStu();
            // vector<string> data = readFile();
            for (int i = 0; i < dataStu.size(); ++i) {
                dataStu.at(i).getInfoNeat();
                // cout << dataStu.at(i).getInfo() << "\n" << endl;
            }
            // //add info in vector to student object

            cout << "----- Professor info -----" << endl;
            vector<Professor> dataProf = readFileProf();
            // vector<string> data = readFile();
            for (int i = 0; i < dataProf.size(); ++i) {
                cout << dataProf.at(i).getInfo() << "\n" << endl;
            }
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}