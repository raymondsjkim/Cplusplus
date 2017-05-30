/*
Description: This function returns a pointer to the maximum value of an array.
Author: Raymond Kim
Input Variables: maximum, *maximum_position, values[], MAX, arr[], *max_pos, input
Process Flow: Read data, set a pointer maximum position to the first location in the array.
			  Loop through the array and point the maximum position to the highest value location in the array.
			  Return the location of the maximum position
Output Variable: The maximum value in the array.
*/
#include "stdafx.h"
#include <iostream>

using namespace std;
/**
	Read data, print out the input, and return the address of the maximum position
	@param *values the location of the first element in the array
	@param size the number of inputs
	return max_position the address of the first element in the array, which is the maximum.
*/
double* findMAX(double* values, int size)
{

	// max value is the first element in the array
    double maximum = values[0]; 
	// point to the location of the max value
	double* max_position = values;
	cout << endl;
	cout << "You have entered: ";
	for(int j = 0; j < size; j++)
	{
		cout << values[j] << " ";
	}
	cout << endl;
    for (int i = 1; i < size; i++)
    {
		// if the next element is greater than the previous element, set that to maximum
        if (values[i] > maximum)
		{
			maximum = values[i];
			// point to location of the highest value in the array
			max_position = &values[i];
		}
    }
	// return the location
    return max_position;
}
int main()
{
	cout << "Enter in 10 numbers to find the maximum value in the array using a pointer." << endl;
	const int MAX = 10;
    double arr[MAX];
    double* max_pos = NULL;
    int i;
	int input;
	cout << endl;
    cout << "Enter values: ";
    for (i = 0; i < MAX; i++)
    {
        cin >> input;
		arr[i] = input;
    }
    max_pos = findMAX(arr, MAX);
	cout << endl;
	cout << "The max value points to: " << max_pos[0] << endl;
	cout << endl;
	system("pause");
    return 0;
}
