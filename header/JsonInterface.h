#ifndef JSONINTERFACE_H
#define JSONINTERFACE_H

#include <iostream> 
#include <vector>
#include <fstream>
#include <algorithm>
#include <limits>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

#include "Professor.h"
#include "Student.h"
#include "../lib/json.hpp"

using namespace std;

class JsonInterface
{
	public:
		JsonInterface(); //mode = true
		vector<Student> readFileStu();
		vector<Professor> readFileProf();
		
		void print();
		void printStudents();
		void printProfessors();

		void add();
		void addProfessor();
		void addStudent();

		void remove();
		void removeProfessor();
		void removeStudent();

		void update();
		void updateProfessor();
		void updateStudent();

		void edit();
		void editProfessor();
		void editStudent();

		void search();
		void searchProfessor();
		void searchStudent();

		void changeMode();
		void writeFileStu(vector<Student> theStudents);
		void writeFileProf(vector<Professor> theProfessors);
		bool getMode();
	private:
		vector<Professor> dataProf;
		vector<Student> dataStu;
		bool mode;
};

#endif // JSONINTERFACE_H
