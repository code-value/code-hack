#include <iostream>
#include<math.h>
using namespace std;

//variable
int C,F;
float convert(float C)
{
	
	return C*9/5+32; //formula
}
//*main program convert celcius to farenheit*//
int main(void)
{
	float value1=0.0;  
	float value2=0.0;
	cout<<"input celcius degree = ";
	cin>>value1;
	value2=convert(value1);
	cout<<"\nResult : "<<value2<<"\n";
	return 0;
}
