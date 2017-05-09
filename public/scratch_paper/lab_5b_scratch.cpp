#include <iostream>
#include <string>
using namespace std;

// get current size of the array from user input
int get_size(int values[], int capacity)
{
	int current_size = 0;
	cout << "Enter numbers with duplicates, Q to exit: ";
	bool more = true;
	while(more) 
	{
		int input;
		cin >> input;
		if(cin.fail())
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

void remove_duplicates(int values[], int size)
{
	/*
		remove the duplicates in this function
	*/
}

int main()
{
	const int MAX = 4;
	int arr[MAX];

	int input_size = get_size(arr, MAX);
	remove_duplicates(arr, input_size);
	
	cout << endl;
	system("pause");
	return 0;
}
