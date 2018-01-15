#ifndef Network_HEADER
#define Network_HEADER

#include "student.h"

class NetworkStudent : public Student {
	public: 
		virtual Degree getDegreeProgram();
		using Student::Student;
	private:
		Degree DegreeType = NETWORKING;
};

#endif