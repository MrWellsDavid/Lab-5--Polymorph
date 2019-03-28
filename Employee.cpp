//Employee.cpp
#include "Employee.h"

Employee::Employee(){
	setName("", "");
	setID("");
	department = "";
}
//mutators
void Employee::setName(string f, string l)
{
	first = f;
	last = l;
}
void Employee::setID(string i)
{
	id = "CTU" + i;
}
string Employee::setDepartment()
{
	string departments[] = {"CS", "EE", "EET", "CET", "Cyber"};
	int option;
	do
	{
		cout <<"Departments\n"
			 <<"==========="<<endl;
		for (int i = 0; i < 5; i++)
			cout <<(i+1)<<". "<<departments[i]<<endl;
		cout <<"Enter the value for the department: ";
		cin >>option;
		
	} while (option < 1 || option > 5);
	
	department = departments[option - 1];
	return department;	
}
void Employee::setDepartment(string d)
{
	department = d;
}
//accessors
string Employee::getName() { return first + " " + last;}
string Employee::getID(){return id;}
string Employee::getDepartment(){return department;}
/*
void Employee::print(){
	
	cout <<"Employee Information\n"
		<<first<<" "<<last<<endl;
}*/
