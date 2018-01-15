#include <iostream>
#include <string>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

class Roster {
	public: 
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
		void printAll();
		void printByDegreeProgram(int degreeProgram);
		void printDaysInCourse(string studentID);
		void printInvalidEmails();
		void remove(string studentID);
		~Roster();
		Student *classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
};