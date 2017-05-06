#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{

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
	else {
		return false;
	}
}

int main()
{
	const int MAX = 100;
	int a[MAX];
	int b[MAX];
	int pos = 0;

	cout << "Enter in 10 values to array a, Q to execute: " << endl;
	int input;
	while (cin >> input)
	{
		if (input < MAX)
		{
			a[pos] = input;
		}
	}

	bool equal = equals(a, MAX, b, MAX);

	if (equal) {
		cout << "match" << endl;
	}
	else
	{
		cout << "Not a match" << endl;
	}

	system("pause");
	return 0;
}
