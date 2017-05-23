/*
This program removes duplicate values in an array

Author: Jonathan Lu

Input Variables:	a. current_size 
					b. p
					c. q
					d. SIZE
					e. temp
					 
Process Flow:	1. Have user input values of an array 
				2. Compute a function that reads the user's array
				3. Compute a function that reverses an array
				4. Print the new reversed array


Output Variables:	a. a[i]

*/

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

/**
Reads the sequence of numbers
@param inputs an array containing the numbers
@param size the size of the array
@return stores the number of inputs in the array
*/
int read_inputs(double inputs[], int size)
{
	int current_size = 0;
	cout << "Please enter 10 values to be in the array,\nEnter Q to execute the program" << endl;
	cout << endl;
	bool more = true;
	while (more)
	{
		double input;
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < size)
		{
			inputs[current_size] = input;
			current_size++;
		}
	}
		return current_size;
}
/**
Reverses an array
@param a[] reads the inputs of the array
@param size reads the new size of the array
*/
void reverse(double* a, int& size)
{
	cout << endl;
	cout << "The array is: "<< endl;
	for(int i = 0; i < size; i++)
	cout << a[i] << " ";
	cout << endl;
	double* p = a;
	double* q = a + (size - 1);
	{
		while (p < q)
		{
			double temp = *p;
			*p = *q;
			*q = temp;
			p++;
			q--;
		}
	}
}
/**
Reads the new array that is now reversed
@param int a[] reads the new reversed array
@param size reads the new size of the array
*/
void print(double* a, int size)
{
	cout << endl;
	cout << "Your new array reversed is:" << endl;
	for(int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	const int SIZE = 10;
	double a[SIZE];
	cout << "This program reverses values in an array" << endl;
	cout << endl;
	
	int current_size = read_inputs(a, SIZE);
	reverse(a, current_size);
	print(a, current_size);

	system ("pause");
	return 0;
}
