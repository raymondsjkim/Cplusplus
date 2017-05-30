/*
Description: This program reads a sequence of numbers, doubles the size of inputs if users input is larger than the set size, and prints them out.
Author: Raymond Kim
Input Variables: input, init_size, *first_array, *end_array, size, *first_index, *added_index
Process Flow: Take in user input, get the size from user input, if the size of user input is larger than the initial size, double initial size.
Copy the first array into the end array, delete the first array values and set the first array equal to end array. Print the new array.
Output Variable: New array with a different length.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

double* read_data(int& size)
{
	double input;
	int init_size = 10;
	double* first_array = new double[init_size];

	cout << "Enter in values in to an array, Q to quit : ";
	while (cin >> input)
	{
		first_array[size] = input;
		size++;
		if (size >= init_size)
		{
			init_size *= 2;

			double* end_array = new double[init_size];

			for (int i = 0; i<size; i++)
			{
				end_array[i] = first_array[i];
			}

			delete[] first_array;
			first_array = end_array;
		}
	}
	return first_array;
}
int main()
{
	int size = 0;
	double* first_index = read_data(size);
	double* added_index = new double[size];
	for (int i = 0; i < size; i++)
	{
		added_index[i] = first_index[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << added_index[i] << " ";
	}
	delete[] added_index;
	delete[] first_index;
	cout << endl;
	system("pause");
	return 0;
}
