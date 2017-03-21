#include <iostream>

using namespace std;

int main()
{
	int floor;
	cout << "Enter a floor: ";
	cin >> floor;

	int actual_floor;

	if(floor > 13) {
		actual_floor = floor -1;
	} else {
		actual_floor = floor;
	}

	cout << "The elevator will travel to the actual floor: " << actual_floor << endl;

	system("pause");
	return 0;
}
