#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Fistname,Lastname;
	int Salary,Sale,Commission,Total;
	cout << "****** Homework 2******"<< endl;
	cout << "Enter name   : ";
	cin  >>  Fistname >> Lastname;
	cout << "Enter Salary : ";
	cin  >> Salary;
	cout << "Enter Sale   : ";
	cin  >> Sale;
	cout << "Enter Commission Percent : ";
	cin  >> Commission;

	cout << ""<< endl;

	cout << "------output---- ------"<< endl;
	cout << "Your name = " << Fistname << " " << Lastname << endl;
	Total =  (Sale * Commission  / 100 + Salary); 
	cout << "Total Revenue " << Total << " Bath " << endl;
	return(0);
}