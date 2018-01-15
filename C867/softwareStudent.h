#ifndef Software_HEADER
#define Software_HEADER

#include "student.h"

class SoftwareStudent : public Student {
public:
	virtual Degree getDegreeProgram();
	using Student::Student;
private:
	Degree DegreeType = SOFTWARE;
};

#endif