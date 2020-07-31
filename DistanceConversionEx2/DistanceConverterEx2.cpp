#include "std_lib_facilities.h"

/*
Program that converts from miles to kilometres
*/
int main()
{
	// type safe initialization
	int miles{ 0 };
	int kilometres{ 0 };
	// output what the program does
	cout << "Program converts miles to kilometres and kilometers to meters.\n"
		 << "Input number of miles: ";
	// process input
	cin >> miles;
	// do calculation
	kilometres = miles * 1609;
	// do output
	cout << "That is " << kilometres << " km\n";// continue vid at 23:09
	// calculate meters by converting km
	int meters{ 0 };
	meters = kilometres * 1000;
	// do output
	cout << "That is " << meters << " m\n";

	return 0;
}