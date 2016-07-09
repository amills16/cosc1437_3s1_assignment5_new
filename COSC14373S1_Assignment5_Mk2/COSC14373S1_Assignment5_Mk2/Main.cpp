#include <iostream>
#include "lowerCaseString.h"
#include "upperCaseString.h"
#include "digitString.h"

using namespace std;

void main()
{
	WCS_String str1("ABCdef");
	WCS_String str2("12345");
	WCS_String str3("54321");
	lowerCaseString LC1;
	lowerCaseString LC2(str1);
	lowerCaseString LC3(LC2);
	digitString DS1(str2);
	digitString DS2(DS1);
	digitString DS3(str3);
	cout << "Printing digitString values pre-operation: \n \t DS1: " << DS1 << endl;
	cout << "\t DS2: " << DS2 << endl;
	cout << "\t DS3: " << DS3 << endl;
	try
	{
		DS2 = str3;
	}
	catch (int e)
	{
		switch (e)
		{
		case 01:
			cout << "The string you attempted to copy contains non-numeric characters, please \n   check your string and try again..." << endl;
			break;
		case 02:
			cout << "*insert second error here*" << endl;
			break;
		default:
			cout << "";
		}
	}
	cout << "Printing digitString values post-operation: \n \t DS1: " << DS1 << endl;
	cout << "\t DS2: " << DS2 << endl;
	cout << "\t DS3: " << DS3 << endl;
	try
	{
		DS3 = str1;
	}
	catch (int e)
	{
		switch (e)
		{
		case 01:
			cout << "The string you attempted to copy contains non-numeric characters, please \n   check your string and try again..." << endl;
			break;
		case 02:
			cout << "*insert second error here*" << endl;
			break;
		default:
			cout << "";
			break;
		}
	}
	cout << "Printing digitString values post-operation: \n \t DS1: " << DS1 << endl;
	cout << "\t DS2: " << DS2 << endl;
	cout << "\t DS3: " << DS3 << endl;
	system("PAUSE");
}