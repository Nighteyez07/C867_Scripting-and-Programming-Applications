#ifndef Student_HEADER
#define Student_HEADER

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		//getters
		int getAge();
		int *getDaysInCourse();
		string getEmail();
		string getFirstName();
		string getLastName();
		string getStudentId();
		Degree getDegreeType();
		//setters
		void setAge(int);
		void setDaysInCourse(int[3]);
		void setEmail(string);
		void setFirstName(string);
		void setLastName(string);
		void setStudentId(string);
		void setDegreeType(Degree);
		//additional methods
		virtual void print();
		virtual Degree getDegreeProgram();
		//constructor
		Student(int, int*, string, string, string, string, Degree);
		~Student();
	private:	
		int Age, DaysInCourse[3];
		string Email, FirstName, LastName, StudentId;
		Degree DegreeType;
};

#endif