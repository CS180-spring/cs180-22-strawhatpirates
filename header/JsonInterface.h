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
		vector<Student> readFileStu();
		vector<Professor> readFileProf();
		void printStudents();
		void printProfessors();
		void addProfessor();
		void addStudent();
		void removeProfessor();
		void removeStudent();
		void updateProfessor();
		void updateStudent();
		void editProfessor();
		void editStudent();
		void searchProfessor();
		void searchStudent();
		void changeMode();
		void writeFileStu(vector<Student> theStudents);
		void writeFileProf(vector<Professor> theProfessors);
		bool getMode();
	private:
		vector<Professor> profVector;
		vector<Student> stuVector;
		bool mode;
};

#endif // JSONINTERFACE_H
