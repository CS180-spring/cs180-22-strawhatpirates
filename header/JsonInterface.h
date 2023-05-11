#ifndef JsonInterface_H
#define JsonInterface_H

#include <iostream> 
#include <vector>
#include "Professor.h"
#include "Student.h"

using namespace std;

class JsonInterface
{
	public:
		JsonInterface(); //mode = true
		void addProfessor();
		void addStudent();
		void removeProfessor();
		void removeStudent();
		void editProfessor();
		void editStudent();
		void searchProfessor();
		void searchStudent();
		void changeMode();
	private:
		vector<Professor> profVector;
		vector<Student> stuVector;
		bool mode;
}
#endif
