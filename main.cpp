#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include "lib/json.hpp"
#include "header/createFile.h"
#include "header/menu.h"
#include "header/deleteStudent.h"
#include "header/editStudent.h"
#include "header/sortStudent.h"
// #include "header/searchStudent.h"
#include "header/readFile.h"
#include "header/JsonInterface.h"
// #include "lib/Professor.cpp"
#include "header/Student.h"
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
            continue;
            //deleteStudent();
        else if (a == 3)
            editStudent();
        else if (a == 4)
            sortStudent();
        else if (a == 5) {
            vector<Student> dataStu = readFileStu();
            jsonInterface.searchStudent(dataStu);
        }
        else if (a == 6)
            createFile();
        else if (a == 7) {
            cout << "----- Student info -----" << endl;
            vector<Student> dataStu = readFileStu();
            // vector<string> data = readFile();
            for (int i = 0; i < dataStu.size(); ++i) {
                cout << dataStu.at(i).getStudentInfo() << "\n" << endl;
            }
            // //add info in vector to student object

            cout << "----- Professor info -----" << endl;
            vector<Professor> dataProf = readFileProf();
            // vector<string> data = readFile();
            for (int i = 0; i < dataProf.size(); ++i) {
                cout << dataProf.at(i).getProfessorInfo() << "\n" << endl;
            }
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}