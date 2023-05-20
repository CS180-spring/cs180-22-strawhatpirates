#include <iostream>
#include <fstream>
#include <algorithm>
#include <limits>
#include "header/menu.h"
#include "header/JsonInterface.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
    JsonInterface jsonInterface;

    do {
        int a = menu();

        if (a == 1)
            jsonInterface.add();
            // jsonInterface.addStudent();
        else if (a == 2)
            jsonInterface.remove();
            // jsonInterface.removeStudent();
        else if (a == 3)
            //jsonInterface.edit();
            //jsonInterface.editStudent();
            continue;
        else if (a == 4)
            //jsonInterface.sort();
            //jsonInterface.sortStudent();
            continue;
        else if (a == 5)
            jsonInterface.search();
            // jsonInterface.searchStudent();
        else if (a == 5)
            continue;
        else if (a == 6)
            jsonInterface.changeMode();
        else if (a == 7) {
            jsonInterface.print();
            // jsonInterface.printStudents(); 
            // jsonInterface.printProfessors();
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}