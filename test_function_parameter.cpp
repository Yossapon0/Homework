#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length,const float Widht);
float Area(const double Bases,const double High);
int main()
{
	char Choice;
	bool Flag = true;
	do {
		DisplayMenu();
		cin >> Choice;
		if (Choice == '1') {
			float Radius;
			cout << "\nEnter Radius : ";
			cin >> Radius;
			cout << "Are of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}

		else if (Choice == '2') {
			float Length,Widht;
			cout << "\nEnter Length and Width : ";
			cin >> Length >> Widht;
			cout << "Are of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length,Widht);
			cout << endl;
		}

		else if (Choice == '3') {
			float Bases,High;
			cout << "\nEnter Bases and Hight : ";
			cin >> Bases >> High;
			cout << "Are of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Bases,High);
			cout << endl;
		}

		else if(Choice == '4') Flag = false;
		else{
			cout << "\nYou choose out of range is ";
			cout << "not process.\n";
		}
	}while (Flag);
	cout << "\n. . . Exit Program . . .\n";
	return(0);
}



float Area(const float Radius)
{
	return(3.14159F * Radius * Radius);
}

float Area(const float Lenght,const float Widht)
{
	return(Lenght * Widht);
}

float Area(const double Bases,const double High)
{
	return(0.5 * Bases * High);
}

void DisplayMenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle " << endl;
	cout << " 2. Rectangle " << endl;
	cout << " 3. Triangle " << endl;
	cout << " 4. Exit " << endl;
	cout << "Enter your choose number : ";
}