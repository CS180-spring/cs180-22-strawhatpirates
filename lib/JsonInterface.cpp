#include "../header/JsonInterface.h"

JsonInterface::JsonInterface()
{
    mode = true;
    stuVector.push_back(new Student("Cole", "Colton", "5.0", "1", "3", "Gender_Studies"));
    stuVector.push_back(new Student("Saul", "Mendoza", "6.0", "1234567", "4", "CEN"));
    stuVector.push_back(new Student("Minh", "Ho", "12.0", "12345", "5", "CS"));
    stuVector.push_back(new Student("Tyler", "tyler", "19.0", "128573", "4", "CS"));
    profVector.push_back(new Professor("Rick", "Chungus", "Mathematics", "Researcher"))
}