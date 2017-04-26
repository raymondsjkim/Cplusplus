#include <iostream>
using namespace std;


/**
	Prompts user to enter a value up to a given maximum # until the user provides a valid input.
	@param  high  the largest allowable input
	@return  the value provided by the user (between 0 and high, inclusive)
*/
int read_high(int high)
{
	int input;
	do {
		cout << "Enter a value between 0 and " << high << ": ";
		cin >> input;
	} while (input < 0 || input > high); // keep asking until provided a valid input
	return input; // return its value
}
int main()
{
	/*
		to call the function: set it to a variable and pass in the argument.
	*/
	int hours = read_high(23);
	int min = read_high(59);

	cout << hours << " hours" << endl;
	cout << min << " minutes" << endl;

	system("pause");
    return 0;
}
