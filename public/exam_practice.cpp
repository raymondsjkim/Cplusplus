#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool same_elements(int a[], int b[], int size)
{
	sort(a, a + size);
	sort(b, b + size);

		for (int i = 0; i < size; i++)
		{
			if (a[i] != b[i]) 
			{
				return false;
			}
			else
			{
				return true;
			}
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
	bool same = same_elements(a,b, MAX);
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
