#ifndef JSONINTERFACE_H
#define JSONINTERFACE_H

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
		void addStudent(vector<Student> &dataStu);
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
};

#endif // JSONINTERFACE_H
