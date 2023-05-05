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

using namespace nlohmann;
using namespace std;

int main()
{
    do {
        int a = menu();

        if (a == 1)
            addStudent();
        else if (a == 2)
            deleteStudent();
        else if (a == 3)
            editStudent();
        else if (a == 4)
            sortStudent();
        else if (a == 5)
            searchStudent();
        else if (a == 6)
            createFile();
        else if (a == 7)
            readFile();
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}