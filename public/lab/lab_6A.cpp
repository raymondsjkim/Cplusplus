/*
Description: This program reverses values in an array using pointers.
Author: Raymond Kim
Input Variables: CAP, myArr, size, current_size, input, more, beg_arr_pointer, end_pointer, temp
Process Flow: 
Output Variable: Input values and values reversed
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int read_inputs(double arr[], int size)
{
	int current_size = 0;
	double input;
	cout << endl;
	cout << "Please enter 10 values to be in the array, Enter Q to execute the program: ";
	bool more = true;
	while (more)
	{
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < size)
		{
			arr[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}
void reverse(double* a, int size)
{
	cout << "You have inputted: ";
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	double* beg_arr_pointer = a;
	double* end_pointer = beg_arr_pointer + size - 1;
	while (beg_arr_pointer< end_pointer)
	{
		double temp = *beg_arr_pointer;
		*beg_arr_pointer = *end_pointer;
		*end_pointer = temp;
		beg_arr_pointer++;
		end_pointer--;
	}
}
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
