#include <iostream>
#include <string>
using namespace std;

/**
Check to see if the values in the array are the same.
@param a and b arrays containing numbers
@param a_size and b_size the capacity of the arrays
return true if the array is the same else return false.
*/
bool same_set(int a[], int a_size, int b[], int b_size)
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
	else
	{
		return false;
	}
}
int main()
{
	const int MAX = 5;
	int a[MAX];
	int b[MAX];
	int input_a;
	int input_b;
	cout << endl;
	cout << "Enter 5 numbers for array a: ";
	for (int i = 0; i < MAX; i++)
	{
		if (cin >> input_a)
		{
			a[i] = input_a;
		}
	}
	cout << "Enter 5 numbers for array b: ";
	for (int j = 0; j < MAX; j++)
	{
		if (cin >> input_b)
		{
			b[j] = input_b;
		}
	}
	cout << endl;
	bool same = same_set(a, MAX, b, MAX);
	if (same) {
		cout << "TRUE: Both unsorted arrays have the same muliplicities" << endl; // if returns true
	}
	else
	{
		cout << "FALSE: Both unsorted arrays do not have the same muliplicities" << endl; // if returns false
	}

	system("pause");
	return 0;
}
