#include<iostream>
#include<string>
using namespace std;
void main()
{
	string Fistname,Lastname;
	int Salary,Sale,Commission;
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
	cout << "Total Revenue " << Sale * Commission  / 100 + Salary << " Bath " << endl;
}