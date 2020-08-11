#include <iostream>
using namespace std;
int CalAge(int);
int main()
{
	int year;
	for(int i = 1; i <= 3 ;i++)
	{
		cout << "Enter your year "<< i << " : ";
		cin  >> year;
		cout << "Age " << i;
		CalAge(year);
	}
	return(0);
}

int CalAge(int year)
{
		cout << " : " <<( 2563 - year) ;
		cout << endl;
		return(year);
}