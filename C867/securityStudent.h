#ifndef Security_HEADER
#define Security_HEADER

#include "student.h"

class SecurityStudent : public Student {
public:
	virtual Degree getDegreeProgram();
	using Student::Student;
private:
	Degree DegreeType = SECURITY;
};

#endif