#include "std_lib_facilities.h"

int main()
{
	double a;
	double b;

	cout << "Please give two double values: \n";
	
	while(cin >> a >> b){
		
		if(a<b)
			{
			cout << "the smaller value is: " << a << "\n";
			}
		else 
			{
			cout << "the smaller value is: " << b << "\n";
			}
		if(a>b)
			{
			cout << "the larger value is: " << a << "\n";
			}
		else 
			{
			cout << "the larger value is: " << b << "\n";
			}

		if(a==b){
			cout << "the numbers are equal\n";	
			}
		double x = a-b;	
		if((x > 0 && x < 1.0/100 || x < 0 && x > -1.0/100)){
			cout << "the numbers are almost equal\n";
			}
	
	}
		return 0;
}
