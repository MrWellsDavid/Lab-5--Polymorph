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
		<<"\t"<<first<<" "<<last<<"\n"
		<<"\t\tID: "<<id<<"\n"
		<<"\t\tDepartment: "<<department<<"\n"
		<<"\t\tRank: "<<rank<<"\n"
		<<"\t\tSalary: $"<<salary<<"\n"
		<<"\t\tOffice: "<<office<<endl;
}
