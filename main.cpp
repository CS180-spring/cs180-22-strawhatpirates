#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include "lib/json.hpp"
#include "header/createFile.h"
#include "header/menu.h"
#include "header/addStudent.h"
#include "header/deleteStudent.h"
#include "header/editStudent.h"
#include "header/sortStudent.h"
#include "header/searchStudent.h"
#include "header/readFile.h"
#include "lib/Student.cpp"
#include <string>

using namespace nlohmann;
using namespace std;

int main()
{
    do {
        int a = menu();

        if (a == 1)
            addStudent();
        else if (a == 2)
            continue;
            //deleteStudent();
        else if (a == 3)
            editStudent();
        else if (a == 4)
            sortStudent();
        else if (a == 5)
            searchStudent();
        else if (a == 6)
            createFile();
        else if (a == 7) {
            vector<Student> data = readFileStu();
            // vector<string> data = readFile();
            for (int i = 0; i < data.size(); ++i) {
                cout << data.at(i).getStudentInfo() << "\n" << endl;
            }
            //add info in vector to student object
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}