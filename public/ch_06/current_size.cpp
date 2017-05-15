#include <iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	int arr[MAX] = { 1, 2, 4 };
	int current_size = 0;

	for (int i = 0; i < MAX; i++)
	{
		if (arr[current_size] < MAX && arr[i] != 0)
		{
			current_size++;
		}
	}
	cout << current_size << endl;
	system("pause");
   	return 0;
}

/*******************************************************************/
	Get current size from input

	const int CAPACITY = 1000;
	double values[CAPACITY];
	int current_size = 0;

	cout << "Enter values for an array, press Q to exit: ";
	double input;
	while (cin >> input)
	{
		if (current_size < CAPACITY)
		{
			values[current_size] = input;
			cout << values[current_size] << " ";
			current_size++;
		}
	}
	cout << current_size << endl;
/*******************************************************************/
