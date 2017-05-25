#include <iostream>
using namespace std;

	const int CAP = 10;
	double first_arr[CAP];

int read_inputs(double arr[], int capacity)
{
	int current_size = 0;
	double input;
	cout << endl;
	cout << "Enter inputs, Q to execute: ";
	bool more = true;
	while (more)
	{
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < capacity)
		{
			arr[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}
int* read_data(int& size)
{

	for(int i = 0; i < size; i++)
	{
		cout << first_arr[i] << endl;
	}

}
int main()
{


	int size = read_inputs(first_arr,CAP);
	int* new_size = read_data(size);
	

	

	system("pause");
	return 0;
}
