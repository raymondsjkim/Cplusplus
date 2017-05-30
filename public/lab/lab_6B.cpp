/*
Description: This program reads a sequence of numbers, doubles the size of inputs if users input is larger than the set size, and prints them out.
Author: Raymond Kim
Input Variables: input, init_size, *first_array, *end_array, size, *first_index, *added_index
Process Flow: Take in user input, get the size from user input, if the size of user input is larger than the initial size of 10, double initial size.
Copy the first array into the end array, delete the first array values and set the first array equal to end array to combine the arrays. Print the new array.
Output Variable: New array with a different length.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
/**
	Read input, get the size, if size of input is greater than initial size, 
	double the initial size, allocate a heap array, copy the elements fron first 
	array to end array, and deallocate the first array.
	@param size the number of inputs supplied from the user
	return first_array the first index of the array
*/
double* read_data(int& size)
{
	double input;
	int init_size = 10;
	double* first_array = new double[init_size];
	cout << endl;
	cout << "Enter in values in to an array, Q to quit : ";
	while (cin >> input)
	{
		first_array[size] = input;
		size++;
		if (size >= init_size)
		{
			// double the initial size
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
	cout << "This program copies a smaller array into a bigger array if the size of the smaller array is greater than the initial size using dynamic memory allocation. " << endl;

	// initial size of array
	int size = 0;

	// call read_data() that has a return value of the first index of the array and an updated size
	double* first_index = read_data(size);

	// allocate a new heap array
	double* added_index = new double[size];

	// loop through and copy elements from first_index into added_index
	for (int i = 0; i < size; i++)
	{
		added_index[i] = first_index[i];
	}
	// Print the new array
	cout << endl;
	cout << "You have inputted: ";
	for (int i = 0; i < size; i++)
	{
		cout << added_index[i] << " ";
	}
	// deallocate the arrays
	delete[] added_index;
	delete[] first_index;
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}
