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
    JsonInterface *jsonInterface = new JsonInterface();

    do {
        int a = menu(jsonInterface->getMode());

        if (a == 1)
            jsonInterface->add();
        else if (a == 2)
            jsonInterface->remove();
        else if (a == 3)
            jsonInterface->update();
        else if (a == 4)
            jsonInterface->sort();
        else if (a == 5)
            jsonInterface->search();
        else if (a == 6)
            jsonInterface->changeMode();
        else if (a == 7) {
            jsonInterface->print();
        }
        else if (a == 8)
            exit(0);
    } while (true);

    return 0;
}
