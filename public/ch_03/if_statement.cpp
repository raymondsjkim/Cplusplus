#include <iostream>
using namespace std;

int main()
{
	
	int floor;
	cout << "Enter a floor #: ";
	cin >> floor;

	// check for input errors
	if(cin.fail())
	{
		cout << "Error: Input was not an integer." << endl;
		system("pause");
		return 1;
	}
	if(floor == 13)
	{
		cout <<"Error: There is no 13 floor" << endl;
		system("pause");
		return 1;
	}
	if(floor <= 0 || floor > 20)
	{
		cout << "Error: The floor must be between 1-20." << endl;
		system("pause");
		return 1;
	}

	// Actual floor
	int actual_floor;

	if(floor > 13)
	{
		actual_floor = floor - 1;
	}
	else
	{
		actual_floor = floor;
	}
	cout << "Elevator will travel to the actual floor: " << actual_floor << endl;


	system("pause");
	return 0;
}
