#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include "json.hpp"
#include "header/createfile.h"
#include "menu.h"
#include "header/addStudent.h"
#include "header/deletestudent.h"
#include "header/editstudent.h"
#include "header/sortstudent.h"
#include "header/searchstudent.h"
#include "header/readfile.h"
#include "lib/Student.cpp"

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
            vector<string> data = readFile();
            for (int i = 0; i < data.size(); ++i) {
                cout << data.at(i) << endl;
            }
            //add info in vector to student object
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}