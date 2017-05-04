#include <iostream>
using namespace std;

int main()
{
	const int MAX = 10;
	double values[MAX];
	int pos = 0;

	cout << "Enter in values in to an array, press Q to execute: ";
	double input;

	while (cin >> input)
	{
		if (input < MAX)
		{
			values[pos] = input;
			cout << values[pos] << " ";
		}
	}
	system("pause");
    return 0;
}
