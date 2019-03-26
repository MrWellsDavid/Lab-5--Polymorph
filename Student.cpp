//Student.cpp
#include "Student.h"
Student::Student(){
	setStanding("Freshman");
	setCredits(0);
	setGPA(4.0);
}
void Student::setStanding(string s){ standing = s;
}

void Student::setCredits(int c){credits = c;
}

void Student::setGPA(double g){gpa = g;
}

void Student::print(){
	cout <<"Student Information\n"
		<<"\tStudent Name: "<<first<<" "<<last<<"\n"
		<<"\tID: "<<id<<"\n"
		<<"\tDepartment: "<<department<<"\n"
		<<"\tStanding: "<<standing<<"\n"
		<<"\tNumber of credits: "<<credits<<"\n"
		<<"\tGPA = "<<gpa<<endl;
}
