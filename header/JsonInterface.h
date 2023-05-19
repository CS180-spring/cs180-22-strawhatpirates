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
		void removeStudent(string SID, vector<Student> stussy);
		void updateProfessor();
		void updateStudent(string SID, vector<Student> stussy);
		void editProfessor();
		void editStudent();
		void searchProfessor();
		void searchStudent(vector<Student> &list);
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
