#include "Header.h"
#include<iostream>

using namespace std;
int main()
{
	int num;
	menu:
	cout << "\nWhat do you want to do?";
	cout << "\n1. Find the string length";
	cout << "\n2. Compare two strings";
	cout << "\n3. Concatenate two strings";
	cout << "\n4. Exit";
	cout << "\nEnter your choice: ";
	cin >> num;
	
	switch(num)
	{
		case 1:
			string_length();
			trya();
			break;
		case 2:
			string_compare();
			trya();
			break;
		
		case 3:
			string_concatenate();
			trya();
			break;
		case 4:
			return 0;
			break;
		default:
			system("cls");
			cout << "Please enter a valid option";
			return main();
	}
	
}
