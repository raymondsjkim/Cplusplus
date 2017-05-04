#include <iostream>
using namespace std;

int main()
{
	const int MAX = 3;
	double values1[] = {1,2,4};
	double values2[] = {1,2,4};
	double values3[] = {3,2,1};
	double values4[] = {4,5,6};
	bool test = false;
	bool test1 = false;

	for(int i = 0; i < MAX; i++)
	{
		if(values1[i] == values2[i])
		{
			test = true;
		}
	}
	cout << test << endl;
	cout << endl;
	for(int j = 0; j < MAX; j++)
	{
		if(values3[j] == values4[j])
		{
			test1 = true;
		}
		else
		{
			test1 = false;
		}
	}
	cout << test1 << endl;

	system("pause");
	return 0;
}
