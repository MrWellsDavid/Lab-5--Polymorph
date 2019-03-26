//Faculty.cpp
#include"Faculty.h"
Faculty::Faculty(){
	setRank("");
	setSalary(0.0);
	setOffice("");
	
}

void Faculty::setRank(string r){
rank = r;}

void Faculty::setSalary(double s){ salary = s;
}

void Faculty::setOffice(string o){ office = o;
}

void Faculty::print(){
	cout <<"Faculty Information\n"
		<<"\tFull Name: "<<first<<" "<<last<<"\n"
		<<"\tID: "<<id<<"\n"
		<<"\tDepartment: "<<department<<"\n"
		<<"\tRank: "<<rank<<"\n"
		<<"\tSalary: $"<<salary<<"\n"
		<<"\tOffice: "<<office<<endl;
}
