/*
Description: This program removes duplicates from a set of inputs 
and prints out a new array without duplicates.
Author: Raymond Kim
Inputs Variables: CAP, arr[], input_size, current_size, more, input.
Functions: main, read_input, remove_duplicates, print.
Process Flow: Read the inputs and return the size of the input.
Find the location of the duplicates, remove them, update size of the array.
Print out the new array.
Output Variables: Updated array without duplicates.
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
/**
	Reads and returns the size of the inputs.
	@param values an array containing integers.
	@param capacity the maximum size of the array.
	@return the number of inputs that are stored in the array.
*/
int read_inputs(int values[], int capacity)
{
	int current_size = 0;
	cout << "Enter values with duplicates, Q to exit: ";
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
/**
	Locate duplicates, remove them, and update the size.
	@param arr[] the array from input
	@param size the current count of the inputs
*/
void remove_duplicates(int arr[], int& size)
{
	cout << endl;
	cout << "You have inputted: ";
	for (int z = 0; z < size; z++)
	{
		cout << arr[z] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size;)
		{
			if (arr[i] == arr[j])
			{
				for (int k = j; k < size; k++)
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
/**
	Prints out the new array
	@param arr[] the inputs without duplicates
	@param size updated count of inputs
*/
void print(int arr[], int size)
{
	cout << endl;
	cout << "New array without duplicates: ";
	for (int i = 0; i < size; i++)
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
	print(arr, input_size);
	cout << endl;
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}
