#include <iostream>
using namespace std;

void test_function(int a[], int a_size, int b[], int b_size)
{
	bool test;
	for (int i = 0; i < a_size; i++)
	{
		if (a[i] == b[i])
		{
			test = true;
		}
		else
		{
			test = false;
		}
	}
	cout << test << endl;
}

int main()
{
	const int MAX = 3;
	int a[MAX] = { 1,5,4 };
	int b[MAX] = { 1,2,4 };

	test_function(a, MAX, b, MAX);


	system("pause");
	return 0;
}
