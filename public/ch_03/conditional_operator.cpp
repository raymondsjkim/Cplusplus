#include <iostream>

using namespace std;

int main()
{
	int floor;
	cout << "Enter a floor: ";
	cin >> floor;

	int actual_floor;

	actual_floor = floor > 13 ? floor - 1 : floor; // different way of writing an if statement

	cout << "The elevator will travel to the actual floor: " << actual_floor << endl;

	system("pause");
	return 0;
}
