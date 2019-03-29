#include <iostream>
#include"Employee.h"
#include"Faculty.h"
#include"Student.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu()
{
	int choice;
	cout <<"\t\tMain Menu\n"
		 <<"\t\t=========\n"
		 <<"\t\t1. Add Faculty\n"
		 <<"\t\t2. Add Student\n"
		 <<"\t\t3. View Faculty\n"
		 <<"\t\t4. View Students\n"
		 <<"\t\t5. View All\n"
		 <<"\t\t6. EXIT\n"
		 <<"\tEnter your choice: ";
	cin >>choice;
	return choice;
}

void addFaculty(Faculty* fPTR, int size, int &track, Employee** ePTR, int empSize, int &empTrack)
{
	Faculty test;//made so that the setDepartment() funcion can be called
	string first, last, id, department, rank, office;
	double salary;
	char option;//for the yes or no to commit the data
	int exit = -1;

	if (track >= size)
		cout <<"Faculty maxed out!\n";
	else if (empTrack >= empSize)
		cout <<"Employees maxed out!\n";
	else
	{
		for (int i = 0; i < track; i++){
			fPTR++;
		}
		cout <<"Enter full name: ";
		cin >>first>>last;
		cout <<"Enter the id: ";
		cin >> id;
		cout <<"Enter the rank: ";
		cin >> rank;
		cout << "Enter the office: ";
		cin >> office;
		cout << "Enter the salary: $";
		cin >> salary;
		department = test.setDepartment();
		cout << "\nData Entered:\n\t" << first << " " << last << "\n\t\tID: " << id << "\n\t\tOffice: "
			 << office << "\n\t\tRank: " << rank << "\n\t\tDepartment: " << department << "\n\t\tSalary $" << salary;
		cout << "\nWould you like to commit this data (y / n): ";
		cin >> option;
		do
		{
			if (option == 'y')
			{
				fPTR->setName(first, last);
				fPTR->setID(id);
				fPTR->setOffice(office);
				fPTR->setRank(rank);
				fPTR->setSalary(salary);
				fPTR->setDepartment(department);
				cout << "Data committed\n" << endl;
				track++;
				ePTR[empTrack] = fPTR;
				empTrack++;
				exit = 0;
			}
			else if (option == 'n')
			{
				cout << "Data not committed\n" << endl;
				exit = 0;
			}
			else
			{
				cout << "Error: Invalid option, re-enter: ";
				cin >> option;
			}
		}while (exit != 0);
	}
}
void addStudent(Student* sPTR, int size, int &track, Employee** ePTR, int empSize, int &empTrack)
{
	Student test;//made so that the setDepartment() funcion can be called
	string first, last, id, department, standing;
	double gpa;
	int credits;
	char option;//for the yes or no to commit the data
	int exit = -1;

	if (track >= size)
		cout <<"Students maxed out!\n";
	else if (empTrack >= empSize)
		cout <<"Employees maxed out!\n";
	else
	{
		for (int i = 0; i < track; i++){
			sPTR++;
		}
		cout <<"Enter full name: ";
		cin >>first>>last;
		cout <<"Enter the id: ";
		cin >> id;
		cout <<"Enter the standing: ";
		cin >> standing;
		cout << "Enter the credits: ";
		cin >> credits;
		cout << "Enter the gpa: ";
		cin >> gpa;
		department = test.setDepartment();
		cout << "\nData Entered:\n\t" << first << " " << last << "\n\t\tID: " << id << "\n\t\tCredits: "
			 << credits << "\n\t\tGPA: " << gpa << "\n\t\tDepartment: " << department;
		cout << "\nWould you like to commit this data (y / n): ";
		cin >> option;
		do
		{
			if (option == 'y')
			{
				sPTR->setName(first, last);
				sPTR->setID(id);
				sPTR->setCredits(credits);
				sPTR->setGPA(gpa);
				sPTR->setStanding(standing);
				sPTR->setDepartment(department);
				cout << "Data committed\n" << endl;
				track++;
				ePTR[empTrack] = sPTR;
				empTrack++;
				exit = 0;
			}
			else if (option == 'n')
			{
				cout << "Data not committed\n" << endl;
				exit = 0;
			}
			else
			{
				cout << "Error: Invalid option, re-enter: ";
				cin >> option;
			}
		}while (exit != 0);
	}
}
void viewFaculty(Faculty* fPTR, int max)
{
	for (int i = 0; i < max; i++)
	{
		fPTR -> print();
		fPTR++;
	}
}
void viewStudent(Student* sPTR, int max)
{
	for (int i = 0; i < max; i++)
	{
		sPTR->print();
		sPTR++;
	}
}
void viewAll(Employee** ePTR, int empMax){
	for (int i = 0; i < empMax; i++)
	{
		(*ePTR) -> print();
		ePTR++;
	}
}
int main(int argc, char** argv) {

	Faculty myFac[100];
	Student myStu[100];
	Employee* myEmp[200];
	int option;
	int facCount =0;
	int stuCount = 0;
	int empCount = 0;
	do
	{
		system("CLS");
		option = menu();
		switch(option)
		{
			case 1:addFaculty(myFac, 100, facCount, myEmp, 200, empCount);
				break;
			case 2:addStudent(myStu, 100, stuCount, myEmp, 200, empCount);
				break;
			case 3:viewFaculty(myFac, facCount);
				break;
			case 4:viewStudent(myStu, stuCount);
				break;
			case 5:viewAll(myEmp, empCount);
				break;
			case 6: cout<<"Goodbye!\n";
				break;
			default: cout <<"Error: Invalid choice!\n";
		}
		system("PAUSE");
	}while (option != 6);


	return 0;
}
