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
            jsonInterface.addStudent();
        else if (a == 2)
            jsonInterface.removeStudent();
        else if (a == 3)
            jsonInterface.update();
        else if (a == 4)
            jsonInterface.sortStudent();
        else if (a == 5)
            jsonInterface.searchStudent();
        else if (a == 5)
            continue;
        else if (a == 6)
            continue;
        else if (a == 7) {
            jsonInterface.printStudents(); 
            jsonInterface.printProfessors();
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}
