#include <iostream>
#include <string>
using namespace std;

// get current size of the array from user input
int get_size(int values[], int capacity)
{
	int current_size = 0;
	cout << "Enter numbers with duplicates, Q to exit: ";
	bool more = true;
	while (more)
	{
		int input;
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < capacity)
		{
			values[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}

void remove_duplicates(int values[], int& size)
{
	int i, j; 
	for( i = 0; i < size; i++) 
	{ 
		for( j = i+1; j < size; j++) 
		{ 
			if( values[i] == values[j] )
			{ 
				cout << values[i] << " "; 
			}
		} 
	} 
}

int main()
{
	const int MAX = 6;
	int arr[MAX];

	int input_size = get_size(arr, MAX);
	remove_duplicates(arr, input_size);

	cout << endl;
	system("pause");
	return 0;
}
