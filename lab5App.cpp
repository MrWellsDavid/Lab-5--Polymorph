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

void addFaculty(Faculty* fPTR, int size, int &track)
{
	string first, last, rank; 
	if (track >= size)
		cout <<"Maxed out!\n";
	else
	{
	
		for (int i = 0; i < track; i++)
			fPTR++;
		cout <<"Enter full name and rank: ";
		cin >>first>>last>>rank;
		fPTR -> setName(first, last);
		fPTR -> setRank(rank);
		track++;
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
			case 1:addFaculty(myFac, 100, facCount);
					
				break;
			case 2:
				break;
			case 3:viewFaculty(myFac, facCount);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6: cout<<"Goodbye!\n";
				break;
			default: cout <<"Error: Invalid choice!\n";
		}
		system("PAUSE");
	}while (option != 6);
	
	
	return 0;
}
