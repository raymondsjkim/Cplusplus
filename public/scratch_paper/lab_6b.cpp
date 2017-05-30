#include "stdafx.h"
#include <iostream>
using namespace std;

double* read_data(int& size);
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
double* read_data(int& size)
{
	double input;
	int init_size = 10;
	double *first_array = new double[init_size];

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
