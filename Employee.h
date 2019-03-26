//Employee.h
#include<iostream>
using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee{
	public:
		Employee();
		void setName(string, string);
		void setID(string);
		void setDepartment();
		string getName();
		string getID();
		string getDepartment();
		virtual void print() = 0;
		
	protected:
		string first;
		string last;
		string id;
		string department;
		
};
#endif
