#include "std_lib_facilities.h"

/*
   Ex.3: Program that inputs two integer numbers, that stores them in two int variables va1 and var2. It determines smaler and larger number.
   Then calculates: sum, difference, product and ratio and reports them to the user. 
*/
int main()
{
	// Determine smaler and larger number
	int val1{ 0 }, val2{ 0 };
	cout << "Input two integer numbers." << endl;
	cin >> val1 >> val2;
	string largerVal = to_string(val1);	
	string ratio = to_string((double)val1 / val2) + " : " + to_string((double)val2 / val2);
	if (val2 > val1)
	{
		largerVal = to_string(val2);
		cout << largerVal << " is larger value." << endl;
		ratio = to_string((double)val1 / val1) + " : " + to_string((double)val2 / val1);
	}
	else if (val2 == val1)
	{
		cout << "Values are equal." << endl;
		ratio = " 1 : 1 ";
	}
	// Determine sum, difference, product and ratio of val1 and val2
	int sum = val1 + val2;
	int difference = abs(val1 - val2);
	int product = val1 * val2;
	// Output
	cout << val1 << " + " << val2 << " = " << sum << endl;
	cout << "| " << val1 << " - " << val2 << " | = " << difference << endl;
	cout << val1 << " * " << val2 << " = " << product << endl;
	cout << val1 << " : " << val2 << " = " << ratio << endl;
	

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

/* Exercise 2: Program that tests ilegal and legal variables names
	
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

*/