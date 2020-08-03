#include<iostream>
using namespace std;
void cal_quizz(float,float,float);
void cal_Total(float,float,float,float,float);
void cal_end(float,float,float,float,float);
int main()
{
	float Total_Quizz;
	float first, second, third,mid_term, final;
	cout << "========QUIZZES========" << endl;
	cout << "Enter first quizz (10)  : ";
	cin  >> first ; 
	cout << "Enter second quizz (10) : ";
	cin  >> second ; 
	cout << "Enter third quizz (10)  : ";
	cin  >> third ;
	cout << "========MID-TERM========"<< endl;
	cout << "Enter mid-term (40)  : ";
	cin  >> mid_term ;
	cout << "========FINAL========"<< endl;
	cout << "Enter final (50)  : ";
	cin  >> final ;
	 
	cal_quizz(first,second,third);
	cal_Total(mid_term,final,first,second,third);
	cal_end(mid_term,final,first,second,third);
	
	return(0);
}

void cal_quizz(float first, float second, float third)
{
	cout << "Quizz Total : " << ( first + second + third ) / 3  << endl; 
}


void cal_Total(float mid_term, float final, float first, float second, float third)
{
	cout << "Nid term : " << mid_term << endl;
	cout << "Final : " << final << endl ;
	cout << "Total : " << mid_term + final + ( first + second + third ) / 3 << endl;
}

void cal_end(float mid_term, float final, float first, float second, float third)
{
	cout << "Your score is : " << ((mid_term + final + ( first + second + third ) / 3) >=60 ? "PASS " : "FALL ") << endl;
}
