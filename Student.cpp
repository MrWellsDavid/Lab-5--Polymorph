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
		<<"\t"<<first<<" "<<last<<"\n"
		<<"\t\tID: "<<id<<"\n"
		<<"\t\tDepartment: "<<department<<"\n"
		<<"\t\tStanding: "<<standing<<"\n"
		<<"\t\tNumber of credits: "<<credits<<"\n"
		<<"\t\tGPA = "<<gpa<<endl;
}
