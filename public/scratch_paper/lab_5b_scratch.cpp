#include <iostream>
using namespace std;

int read_inputs(int values[], int size)
{
	int current_size = 0;
	cout << "Enter values with duplicates, Q to exit: ";
	bool more = true;
	while(more)
	{
		int input;
		cin >> input;
		if(cin.fail())
		{
			more = false;
		}
		else if(current_size < size)
		{
			values[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}

void remove_duplicates(int arr[], int& size)
{
	cout << endl;
	cout << "You have inputted: ";
	for(int z = 0; z < size; z++)
	{
		cout << arr[z] << " ";
	}
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size;)
		{
			if(arr[i] == arr[j])
			{
				for(int k = j; k < size; k++)
				{
					arr[k] = arr[k + 1];
				}
				size--;
			}
			else 
			{
				j++;
			}
		}
	}
}

void print(int arr[], int size)
{
	cout << endl;
	cout << "New array without duplicates: ";
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	cout << "This program removes the duplicates from a set of inputs" << endl;
	cout << endl;
	const int CAP = 100;
	int arr[CAP];
	int input_size = read_inputs(arr, CAP);
	remove_duplicates(arr, input_size);
	cout << endl;
	print(arr, input_size);
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}

