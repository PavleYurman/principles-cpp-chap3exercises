#include "std_lib_facilities.h"

/*
   Program that tests ilegal and legal variables names
*/
int main()
{
	// Ilegal names:
	//int double = 0; // invalid combination of type specifiers
	int _varName = 1; // _ characters are reserved for system // compiler doesnt mind abount that
	int $variable = 3; // $ characters are not recomended but compiler doesnt mind
	//int 2number = 3; // variable starts with illegal character number 2 // syntax error: identifier expected // compiler says:
					//syntax error: 'user-defined literal'
	//int a ab;//for letter a -> syntax error: 'user-defined literal' local variable is not initialized
	// and for word ab -> syntax warning:expected a ;
	// Legal names:
	int a = 2;
	int b = 3, c = 4, d = 5;
	string legal_name = "legal_name";
	string legalName = "legalName";
	string legalName1 = "legalName1";


	return 0;
}

/* Exercise 2: Program that converts from miles to kilometres and km to meters
	// type safe initialization
	int miles{ 0 };
	int kilometres{ 0 };
	//!"! output what the program does
	cout << "Program converts miles to kilometres and kilometers to meters.\n"
		 << "Use only integer values.\n"
		 << "Input number of miles: ";
	// process input
	cin >> miles;
	// do calculation
	kilometres = miles * 1609;
	// do output
	cout << "That is " << kilometres << " km.\n";
	// calculate meters by converting km
	int meters{ 0 };
	meters = kilometres * 1000;
	// do output
	// separate milions, tousands, hundreds and tens plus ones
	int milions = meters / 1000000;
	int tempTousands = meters % 1000000;
	int tousands = tempTousands / 1000;
	string strTousands = to_string(tousands);
	if (tousands < 100)
	{
		strTousands = "0" + strTousands;
	}
	if (tousands < 10)
	{
		strTousands = "0" + strTousands;
	}
	string strMilions = " milion";
	if (milions >= 2)
	{
		strMilions += "s";
	}
	cout << "That is " << milions << strMilions << " " << strTousands << " tousand meters." << endl;



*/