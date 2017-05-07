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
	const int MAX = 100;
	int a[MAX] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[MAX] = { 1,2,3,4,5,6,7,8,9,10 };

	bool equal = equals(a, MAX, b, MAX);

	if (equal) {
		cout << "They match" << endl;
	}
	else
	{
		cout << "They do not a match" << endl;
	}

	system("pause");
	return 0;
}
