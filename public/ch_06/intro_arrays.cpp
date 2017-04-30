#include <iostream>
using namespace std;

int main()
{
	const int CAPACITY = 100;
	double values[CAPACITY];

	int current_size = 0;

	cout << "Enter values (press Q and enter to execute): ";
	double input;

	while (cin >> input)
	{
		if (current_size < CAPACITY)
		{
			values[current_size] = input;
			current_size++;
		}
	}
	for (int i = 0; i < current_size; i++)
	{
		cout << values[i] << " ";
	}

	system("pause");
    return 0;
}
