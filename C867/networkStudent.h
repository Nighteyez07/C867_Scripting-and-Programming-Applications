#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"

class NetworkStudent : public Student {
	public: 
		virtual Degree getDegreeProgram();
	private:
		Degree DegreeType = NETWORKING;
};

#endif // !NETWORKSTUDENT_H

