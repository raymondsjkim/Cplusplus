#include "stdafx.h"
#include <iostream>
using namespace std;

int* read_data(int& size)
{
	int temp_size = 10;
	int* temp = new int[temp_size];
	size = 0;
	int input = 0;
	while (cin >> input)
	{
		temp[size] = input;
		size++;
		if (size == temp_size)
		{
			int* new_temp = new int[temp_size * 2];
			for (int i = 0; i < temp_size; i++)
			{
				new_temp[i] = temp[i];
			}
			temp_size = temp_size * 2;
			delete[] temp;
		}
	}
	return temp;
}

int main()
{
	int size;
	int* values;
	cout << "Enter: ";
	values = read_data(size);
	cout << "The inputs are: ";
	for (int i = 0; i < size; i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;

	system("pause");
    return 0;
}
