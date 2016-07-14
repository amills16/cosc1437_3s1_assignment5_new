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
	WCS_String str4("AlTeRnAtInG StRiNg W/ $yMb0L% 1234...");
	WCS_String str5;
	lowerCaseString LC1;
	lowerCaseString LC2(str1);
	lowerCaseString LC3(LC2);
	digitString DS1(str2);
	digitString DS2(DS1);
	digitString DS3(str3);
	upperCaseString US1;
	upperCaseString US2(str1);
	upperCaseString US3(US2);

	cout << "Printing upperCaseString values pre-operation: \n \t US1: " << US1 << endl
		<< "\t US2: " << US2 << endl
		<< "\t US3: " << US3 << endl;
	cout << "Enter a new string to be uppercased here: "; cin >> str5;
	US1 = str1;
	US2 = str5;
	US3 = str4;
	cout << "Printing upperCaseString values post-operation: \n \t US1: " << US1 << endl
		<< "\t US2: " << US2 << endl
		<< "\t US3: " << US3 << endl;

	cout << "Printing digitString values pre-operation: \n \t DS1: " << DS1 << endl 
		 << "\t DS2: " << DS2 << endl
		 << "\t DS3: " << DS3 << endl;
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