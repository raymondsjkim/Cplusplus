#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/* 
change name functuion bool same_elements 
@param a[], b[], and size. delete b_size.
*/
bool same_set(int a[], int a_size, int b[], int b_size)
{
	sort(a, a + a_size);
	sort(b, b + b_size);
	if (a_size == b_size)
	{
		for (int i = 0; i < a_size && b_size; i++)
		{
			if (a[i] != b[i]) 
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
	const int MAX = 9;
	int a[MAX];
	int b[MAX];
	int input_a;
	int input_b;
	cout << endl;
	cout << "Enter 9numbers for array a: ";
	for (int i = 0; i < MAX; i++)
	{
		if (cin >> input_a)
		{
			a[i] = input_a;
		}
	}
	cout << "Enter 9umbers for array b: ";
	for (int j = 0; j < MAX; j++)
	{
		if (cin >> input_b)
		{
			b[j] = input_b;
		}
	}
	cout << endl;
	/*
		change arguments to (a,b,MAX);
	*/
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
