#include "Header.h"
#include<iostream>
using namespace std;
int string_length()
{
	char str[99], *pt;
	int i = 0;
	
	cout << "Enter a string [Max of 99 characters]:";
	cin >> str;
	
	pt = str;
	while(*pt != '\0')
	{
		i++;
		pt++;
	}
	cout << "length of string is:" << i;
}

int string_compare()
{
	char str[99], str2[99], *pt, *ptr;
	int i = 0;
	int j = 0;
	
	cout << "Enter string [Max of 99 characters]:";
	cin >> str;
	
	cout << "Enter string 2 [Max of 99 characters]:";
	cin >> str2;
	
	pt = str;
	while(*pt != '\0')
	{
		i++;
		pt++;
	}
	
	ptr = str2;
	while(*ptr != '\0')
	{
		j++;
		ptr++;
	}
	
	if (i > j)
	{
		cout << "string 1 is longer than string 2.";
	}
	else if (i < j)
	{
		cout << "string 2 is longer than string 1.";
	}
	else if (i == j)
	{
		cout << "string 1 and string 2 is equal.";
	}
}

int string_concatenate()
{
	char firstString[99], secondString[99], *pt1, *pt2;
	char storage;

	cout << "Enter the first string: ";
	cin >> firstString;
	cout << "Enter the second string: ";
	cin >> secondString;

	pt1 = firstString;
	pt2 = secondString;

	while(*pt1 != '\0') 
	{
		pt1++;

	}



	while (*pt2 != '\0') 
	{
		*pt1 = *pt2;

		pt1++;
		pt2++;
	}
	pt1 = '\0';
	cout << firstString;
}

int trya()
{
	char ta;
	cout << "\nWould you like to Try again?[Y/y:yes]|[N/n:no]";
	cin >> ta;
	if (ta == 'Y' || ta == 'y')
	{
		system("cls");
		return main();
	}
	else if (ta == 'N' || ta == 'n')
	{
		return 0;
	}
	else
	{
		cout << "Enter a valid choice";
		return trya();
	}
}
