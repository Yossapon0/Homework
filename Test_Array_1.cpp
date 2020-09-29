#include <iostream>
#include<string>
#include<array>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int salary);
int main()
{
	int num,salary;
	cout << "Enter Number of student : ";
	cin >> num;
	int *a = new int[num];
	for(int x = 0; x<num ; x++)
	{
		cout << "Enter the salary "<< x + 1 <<" : ";
		cin >> a[x];
	}
	cout << "There are "<< num <<" persons." << endl;
	display(a,num);
	return(0);
}

void display(int salary[],int num)
{
	int *bonus = new int[num];
	for(int i = 0; i < num ; i++)
	{
		cout << "the Salary for person "<< i + 1 <<" = " << salary[i] ;
		bonus[i] = cal_bonus(salary[i]);
		cout << "	and Bonus = " << bonus[i] << endl;
	}
}

int cal_bonus(int salary)
{
	int bonus;
	bonus =  salary * 2 ;
	return bonus;
}
