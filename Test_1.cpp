#include<iostream>
using namespace std;
int main(){

	 

 int hour, Total,Pay,Change;
	cout << "Enter Hour : ";
	cin  >> hour;

	cout << "";

	Total = ( 250 * hour );
	cout << "Total " << Total << endl;

	Total = ( Total / 1250  );
	cout << "Enter Pay : ";
	cin  >> Pay;
	Change = Total - Pay  ;
	cout << "Chang " << Change << endl;
	


	return(0);
}