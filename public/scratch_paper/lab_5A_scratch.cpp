#include <iostream>
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
	const int MAX = 10;
	int a[MAX] = { 1,2,3,23,5,6,7,8,9,10 };
	int b[MAX] = { 1,2,3,4,5,6,7,8,9,10 };

	bool equal = equals(a, MAX, b, MAX);

	if (equal) {
		for (int i = 0; i < MAX; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		for (int j = 0; j < MAX; j++)
		{
			cout << b[j] << " ";
		}
		cout << endl;
		cout << "Is a match!" << endl;
	}
	else
	{
		for (int x = 0; x < MAX; x++)
		{
			cout << a[x] << " ";
		}
		cout << endl;
		for (int y = 0; y < MAX; y++)
		{
			cout << b[y] << " ";
		}
		cout << endl;
		cout << "Is not a match" << endl;
	}

	system("pause");
	return 0;
}
