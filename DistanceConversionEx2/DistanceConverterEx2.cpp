#include "std_lib_facilities.h"

/*
Program that converts from miles to kilometres
*/
int main()
{
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
	

	return 0;
}