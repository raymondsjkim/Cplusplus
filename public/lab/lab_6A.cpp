/*
Description: This program reverses values in an array using pointers.
Author: Raymond Kim
Input Variables: CAP, myArr, size, current_size, input, more, beg_arr_pointer, end_pointer, temp
Process Flow: Prompt user, read the inputs and return the size.
Reverse the inputs using pointers. Print the new array.
Output Variable: Input values and values reversed
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
/**
	Reads and returns the size of the inputs.
	@param values an array containing integers and fractional numbers.
	@param capacity the maximum size of the array.
	@return the number of inputs that are stored in the array.
*/
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
/**
	Reverses the inputs by switching the first and last elements until the condition is met
	@param a pointer to the first index in the array
	@param size the size of the inputs
*/
void reverse(double* a, int size)
{
	cout << "You have inputted: ";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	double* beg_arr_pointer = a; // point to the initial value in the array
	double* end_pointer = beg_arr_pointer + size - 1; // point to the last value in the array
	while (beg_arr_pointer < end_pointer)
	{
		double temp = *beg_arr_pointer;
		*beg_arr_pointer = *end_pointer;
		*end_pointer = temp;
		beg_arr_pointer++;
		end_pointer--;
	}
}
/**
	Prints out the new array
	@param a[] inputs reversed
	@param size the size of the inputs
*/
void print(double a[], int size)
{
	cout << "Input reversed: ";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	cout << "This program reverses a set of inputs using pointers." << endl;
	const int CAP = 1000;
	double myArr[CAP];

	double size = read_inputs(myArr, CAP);
	cout << endl;
	reverse(myArr, size);
	cout << endl;
	print(myArr, size);
	cout << endl;

	system("pause");
    return 0;
}
