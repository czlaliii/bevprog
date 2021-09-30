#include "std_lib_facilities.h"

int main()

{	string first_name;

	cout << "Enter the name of the person you want to write to:\n";
	cin >> first_name;
	cout << "Dear "<< first_name << ",\n"
	     << "How are you? I am fine. I miss you.\n"
	     << "I thought we should have a meeting sometime.\n";
	     
	cout << "PLease enter the name of your other friend:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen "<< friend_name << " lately?\n";
	
	char friend_sex=0;
	cout << "Please enter the gender of your friend (m/f):\n";
	cin >> friend_sex;
	
	if(friend_sex=='m')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if(friend_sex=='f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	
	int age;
	cout << "Please enter the age of the recipient:\n";
	cin >> age;
	
	if (age <= 0 || age >= 110)
    		simple_error("you're kidding!");
		
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	
	if(age<12)
		cout << "Next year you will be " << age+1 << ".\n";
	else if(age==17)
		cout << "Next year you will be able to vote.\n";
	else if(age>70)
		cout << "I hope you are enjoying retirement.\n";	
	
	cout << "\nYours sincerely,\n\nLali\n";
	
return 0;
}
