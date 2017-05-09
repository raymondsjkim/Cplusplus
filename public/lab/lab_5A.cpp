/*
Description: This program checks whether two arrays have the same elements in order.
Author: Raymond Kim
Input Variables: MAX, a[MAX], b[MAX], equal
Process Flow: Create two arrays with a size of 10.
			  Create a funtion equals() with 4 parameters for 2 arrays and 2 sizes.
			  If the size of the array are the same check if the values in the array are not the same.
			  If they are not the same return false, else return true.
Output Variable: Same or not the same arrays.
*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


/**
Check to see if the values in the array are the same.
@param a and b arrays containing numbers
@param a_size and b_size the capacity of the arrays
return true if the array is the same else return false.
*/
bool equals(int a[], int a_size, int b[], int b_size)
{
	if (a_size == b_size) // continue if the array size is the same else return false
	{
		for (int i = 0; i < a_size && b_size; i++)
		{
			if (a[i] != b[i]) // if a value does not match return false
			{
				return false;
			}
		}
		return true; 
	}
	else {
		return false;
	}
}

int main()
{
	const int MAX = 10;
	int a[MAX] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[MAX] = { 1,2,3,4,5,6,7,8,9,10 };
	bool equal = equals(a, MAX, b, MAX);
	if (equal) {
		cout << "Both arrays are the same" << endl; // if returns true
	}
	else
	{
		cout << "Two arrays are different" << endl; // if returns false
	}
	system("pause");
	return 0;
}
