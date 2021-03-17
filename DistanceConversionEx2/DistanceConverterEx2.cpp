#include "std_lib_facilities.h"

// Pavel Koprivec 17/3/2021
// Chapter 3 Exercise 11
// What does the program do ?
// Program asks how many coins of pennies(p)(penie = 1 ) , nickle(s) = x 5p, dime(s) = x 10p, quarter(s) = x 25p,
// half dollar(s) = x 50p and dollar(s) = x 100p
// Then it calculates the summ of pennies and converts to dollars
// Outputs result to the user with gramaticaly correct spelling out, eg.: 1 pennie, 2 pennies

int main()
{
	// What program does output to the user
	cout << "Program takes the number of coins for pennies, nickles, dimes, quarters, half dollars and dollars\n"
		 << "and calculates the total in dollars and pennies\n";
	// Variables:
	int coins[6] = {0, 0, 0, 0, 0, 0};
	int totalPennies{ 0 };
	int totalDolars{ 0 };
	int remainderPenniesTens{ 0 };
	int remainderPenniesOnes{ 0 };
	string coinName[6]{ "pennie", "nickle", "dime", "quarter", "half dollar", "dollar" };
	// Prompt for coins. Ask user for each type of coin: “How many pennies/coinType do you have?”
	for (int i = 0; i < 6; i++)
	{
		cout << "How many " << coinName[i] << "s do you have ?\nInput: ";
		cin >> coins[i];
	}
	// Convert each coin type into number of penies and calculate the total sum in penies	
	totalPennies = coins[0] + coins[1] * 5 + coins[2] * 10 + coins[3] * 25 + coins[4] * 50 + coins[5] * 100;
	// Convert to dollars --> dollars = sumInPennies / 100
	totalDolars = totalPennies / 100;
	// How many tens ?
	remainderPenniesTens = totalPennies % 100;
	remainderPenniesTens = remainderPenniesTens / 10;
	remainderPenniesOnes = totalPennies % 10;
	// Output with correct ending	
	for (int i = 0; i < 6; i++)
	{
		if (coins[i] == 1)
		{
			cout << "You have " << coins[i] << " " << coinName[i] << endl;
		}
		else
		{
			cout << "You have " << coins[i] << " " << coinName[i] << "s" << endl;
		}
	}
	// Optut total pennies and dollars
	string strPennies = "pennie";
	string strDollars = "dollars";
	if (totalPennies > 1)
	{
		strPennies = strPennies + "s";
	}
	if (remainderPenniesTens == 0 && remainderPenniesOnes == 0 &&  totalDolars == 1)
	{
		strDollars = "dollar";
	}
	cout << "You have a total of " << totalPennies << " " << strPennies << endl;
	cout << "That is " << totalDolars << "." << remainderPenniesTens << remainderPenniesOnes << " " << strDollars << endl;

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
	string legala = "legala";

*/

/*
   Ex.4 + 5: Program that inputs two integer numbers, that stores them in two int variables va1 and var2. It determines smaler and larger number.
   Then calculates: sum, difference, product and ratio and reports them to the user.
   Ex. 5: change the type of variables to double and ask the user to input floating point number. What is the difference?
   I see no difference.

	// Ex. 4 + 5
	// Determine smaler and larger number
	//int val1{ 0 }, val2{ 0 };
	double val1{ 0.0 }, val2{ 0.0 };
	cout << "Input two floating point numbers." << endl;
	cin >> val1 >> val2;
	string largerVal = to_string(val1);
	//string ratio = to_string((double)val1 / val2) + " : " + to_string((double)val2 / val2);
	string ratio = to_string(val1 / val2) + " : " + to_string(val2 / val2);
	if (val2 > val1)
	{
		largerVal = to_string(val2);
		cout << largerVal << " is larger value." << endl;
		//ratio = to_string((double)val1 / val1) + " : " + to_string((double)val2 / val1);
		ratio = to_string(val1 / val1) + " : " + to_string(val2 / val1);
	}
	else if (val2 == val1)
	{
		cout << "Values are equal." << endl;
		ratio = " 1 : 1 ";
	}
	// Determine sum, difference, product and ratio of val1 and val2
	double sum = val1 + val2;
	double difference = abs(val1 - val2);
	double product = val1 * val2;
	// Output
	cout << val1 << " + " << val2 << " = " << sum << endl;
	cout << "| " << val1 << " - " << val2 << " | = " << difference << endl;
	cout << val1 << " * " << val2 << " = " << product << endl;
	cout << val1 << " : " << val2 << " = " << ratio << endl;



*/

/* Ex. 6
Program asks the user to input 3 integer values that puts them into a ordered sequence and outputs them seperated by comas.

   int a{ 0 }, b{ 0 }, c{ 0 };
	int temp{ 0 };
	cout << "Program sorts 3 integer numbers from smalest to largest." << endl;
	cout << "Input 3 numbers separated by space. " << endl;
	cout << "And press enter. " << endl;
	cout << "Input: ";
	cin >> a >> b >> c;
	// Compare values
	if (b < a) // if b is smaller than a
	{
		temp = a; // excange values between a and b so that a gets the smaller value
		a = b;
		b = temp;
		if (c < a) // if c is less then a
		{
			temp = a; // exchange values between a and c so that a gets smaller value
			a = c;
			c = temp;
		}
		if (c < b) // if c less than b
		{
			temp = b; // exchange values so that b gets smaller value
			b = c;
			c = temp;
		}
	}
	else // if b is equal or grater than a
	{
		if (c < a) // if c is less then a
		{
			temp = a; // exchange values between a and c so that a gets smaller value
			a = c;
			c = temp;
		}
		if (c < b) // compare c and b
		{
			temp = b;
			b = c;
			c = temp;
		}
	}
	// Output sorted numbers
	cout << "Sorted numbers are: " << a << ", " << b << ", " << c << endl;


*/

/*
Ex. 7
Let say user input these 3 strings: Steinbeck, Hemingway, Fitzgerald. Program puts them into a ordered sequence and outputs them seperated by comas.

	string name1{ "Steinbeck" }, name2{ "Hemingway" }, name3{ "Fitzgerald" };
	string temp{ "" };
	cout << "Program sorts 3 names to get the following sequence: Fitzgerald, Hemingway, Steinbeck." << endl;

	// Compare values
	if (name2 < name1)
	{
		temp = name1;
		name1 = name2;
		name2 = temp;
		if (name3 < name1)
		{
			temp = name1;
			name1 = name3;
			name3 = temp;
		}
		if (name3 < name2)
		{
			temp = name2;
			name2 = name3;
			name3 = temp;
		}
	}
	else // if b is equal or grater than a
	{
		if (name3 < name1)
		{
			temp = name1;
			name1 = name3;
			name3 = temp;
		}
		if (name3 < name2)
		{
			temp = name2;
			name2 = name3;
			name3 = temp;
		}
	}
	// Output sorted names
	cout << "Sorted names are: " << name1 << ", " << name2 << ", " << name3 << endl;
*/

/*
Ex. 8
User input some integer number and program concludes if it is an odd or even number by giving an output like: The value 4 is an even number.
  Ex. 8.1
Program can handle multiple values and if user types something that is not a number the program exits.

	// Ex. 8
	int number{ 0 };
	string num_name = " odd.";
	cout << "Input some integer number(not too big) and program will determine if it is an odd or even number.\nInput number: " << endl;
	cin >> number ;
	if (number % 2 == 0)
	{
		num_name = " even.";
	}
	cout << "The number " << number << " is " << num_name << endl;

	// Ex. 8.1
	int number{ 0 };
	string num_name = "";
	cout << "Input integer numbers separated by space(not too big) and program will determine if it is an odd or even number.\n"
		 << "Enter a letter to exit.\n"
		 << "Input numbers: " << endl;
	while (cin >> number)
	{
		num_name = " odd.";
		if (number % 2 == 0)
		{
			num_name = " even.";
		}
		cout << "The number " << number << " is " << num_name << endl;
		cout << "Enter a letter to exit or\n"
			 << "input numbers: " << endl;
	}
*/

/*
	Ex. 9
	Program takes spelled numbers "zero" to "four" and converts them to corresponding digits.
	If the spelled number is not known the program outputs
	not a nummber I know"

	// Tell the user what to Input
	cout << "Write 0 - 4 number in lower case words.\nInput:";
	// Initialize variables
	// Suppose we start with the number we dont know, like 1000.
	string numberStr = "not a number I know";
	int number = 1000;
	bool validNumber = false;
	// Take the input into string variable
	while (cin >> numberStr)
	{
		if (numberStr == "e")
		{
			break;
		}
		// Check if the input matches the selected spelled numbers
		if (numberStr == "zero")
		{
			number = 0;
			validNumber = true;
		}
		else if (numberStr == "one")
		{
			number = 1;
			validNumber = true;
		}
		else if (numberStr == "two")
		{
			number = 2;
			validNumber = true;
		}
		else if (numberStr == "three")
		{
			number = 3;
			validNumber = true;
		}
		else if (numberStr == "four")
		{
			number = 4;
			validNumber = true;
		}
		else
		{
			validNumber = false;
		}
		// Output the corresponding digit to the spelled number
		if (validNumber)
		{
			cout << "You wrote " << number << endl;
		}
		else
		{
			numberStr = "not a number I know";
			cout << numberStr << endl;
		}
		cout << "Enter a string number or type e to exit\nInput: ";
	}

*/

// Solution to Chapter 3 Exercise 9
// note that different compilers/SDEs keep header files in different places
// so that you may have to use "../std_lib_facilities.h" or "../../std_lib_facilities.h"
// the ../ notation means "look one directory/folder up from the current directory/folder"

// Bjarne Stroustrup 7/20/2009
// Chapter 3 Exercise 9

/*
int main()
{
	try
	{
		cout << "Please enter an integer as a text string: ";
		string s;
		while (cin >> s)
		{
			if (s == "Quit")
				break;
			else if (s == "zero")
				cout << s << " has the value 0\n";
			else if (s == "one")
				cout << s << " has the value 1\n";
			else if (s == "two")
				cout << s << " has the value 2\n";
			else if (s == "three")
				cout << s << " has the value 3\n";
			else if (s == "four")
				cout << s << " has the value 4\n";
			else
				cout << s << " does not have a numeric value I understand\n";
			cout << "Please enter another integer as a text string or type Quit: ";
		}

		keep_window_open();	// For some Windows(tm) setups
	}
	catch (runtime_error e)
	{
		cout << e.what() << '\n';
		keep_window_open("~");	// For some Windows(tm) setups
	}

return 0;
}
	/*
	To make it less tedious to test I made a loop testing strings. I "forgot" to provide a way to exit
	that loop so you must either kill the program or enter an end-of-input (cntrl-Z for Windows or cntrl-D
	for Unix). Maybe you could modify the program to end if it sees "Quit"?

	All of those ifs can get tedious (and anything tedious is error prone), but for now we don't have
	the tools to do better. later (e.g. Chapter 4), we'll see how this code can be simplified by using
	a for-loop and a vector of strings.

*/

/*
// Pavel Koprivec 16/03/2021
// Chapter 3 Exercise 10
// The program reads operations +, -, * and / and two operands. It figures out what is the operation and computes the result
// back to the user.

int main()
{
	// Components: variables, outputs, inputs, control structure, computation
	string operation = " not known ";
	double operand1 = 0.0;
	double operand2 = 0.0;
	// Output to user
	cout << "Write in the following format to get the computation done:\n"
		<< "operation(+, -, *, /) space operand(number1) space operand(number2)\n"
		<< "Input (operation operand operand enter): ";
	// take input and process computation in while
	try
	{
		while (cin >> operation >> operand1 >> operand2)
		{
			if (operation == "Quit")
			{
				break;
			}
			else if (operation == "+")
			{
				cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << endl;
			}
			else if (operation == "-")
			{
				cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << endl;
			}
			else if (operation == "*")
			{
				cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << endl;
			}
			else if (operation == "/")
			{
				cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << endl;
			}
			else
			{
				cout << "Dont know the operation you are suggesting?" << endl;
			}
			cout << "Input (operation operand operand) or Quit 0 0 to quit: ";
		}
	}
	catch (runtime_error e)
	{
		cout << e.what();
		keep_window_open();
	}


	return 0;
}
*/

/*
// Bjarne Stroustrup 4/4/2009
// Chapter 3 Exercise 10

int main()
{
	try
	{
		string operation;
		double val1 = 0;	// first/leftmost operand
		double val2 = 0;	// second/rightmost operand
		cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";

		while (cin >> operation >> val1 >> val2) {	// we do the following as long as we get "good" input
													// and then stop
													// loops will be explainied in detail in Chapter 4
			double res = 0;
			if (operation == "plus" || operation == "+") res = val1 + val2;
			else if (operation == "minus" || operation == "-") res = val1 - val2;
			else if (operation == "mul" || operation == "*") res = val1 * val2;
			else if (operation == "div" || operation == "/") {
				if (val2 == 0) error("trying to divide by zero");
				res = val1 / val2;
			}
			else error("sorry: bad operator: ", operation);

			cout << val1 << operation << val2 << " == " << res << '\n';
			cout << "Please try again: ";
		}
		cout << "exit because of bad input\n";
		keep_window_open("~");	// For some Windows(tm) setups
	}
	catch (runtime_error e) {	// this code is to produceerror messages; it will be described in Chapter 5
		cout << e.what() << '\n';
		keep_window_open("~");	// For some Windows(tm) setups
	}

	return 0;
}
*/

/*
// Pavel Koprivec 16/3/2021
// Chapter 3 Exercise 10 version 2
// The program reads operations +, -, * and / and two operands. It figures out what is the operation and computes the result
// back to the user.

int main()
{
	// Components: variables, outputs, inputs, control structure, computation
	string operation = " not known ";
	double operand1 = 0.0;
	double operand2 = 0.0;
	// Output to user
	cout << "Write in the following format to get the computation done:\n"
		<< "Input (operation(+, -, * or /) space operand(number) space operand(number) enter): ";
	// take input and process computation in while
	try
	{
		double result = 0.0;
		while (cin >> operation >> operand1 >> operand2)
		{
			if (operation == "Quit")
			{
				break;
			}
			else if (operation == "+")
			{
				result = operand1 + operand2;
			}
			else if (operation == "-")
			{
				result = operand1 - operand2;
			}
			else if (operation == "*")
			{
				result = operand1 * operand2;
			}
			else if (operation == "/")
			{
				if (operand2 == 0)
				{
					error("Devision by 0 not allowed!\n");
				}
				result = operand1 / operand2;
			}
			else
			{
				error( "Dont know the operation: " + operation + "\n");
			}

			operation = " " + operation + " ";
			cout << operand1 << operation << operand2 << " = " << result << endl;
			cout << "Input (operation operand operand) or Quit 0 0 to quit: ";
		}

		cout << "Not a valid operand." << endl;
		keep_window_open("~");
	}
	catch (runtime_error e)
	{
		cout << e.what();
		keep_window_open();
	}


	return 0;
}
*/