#include <iostream>
using namespace std;

double sum(int* a, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total = total + a[i];
	}
	return total;
}
int main()
{
	const int MAX = 10;
	int data[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	int s = sum(data, MAX);
	cout << s << endl;

	system("pause");
	return 0;
}




/*
	int a[10] = { 0,1,4,9,16,25,36,49,64,81 };
	int* p = a;
	cout << *(p + 8) << endl; // output: 64
*/


/*
void sum(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(a + i) << endl;
	}
}
int main()
{
	const int MAX = 10;
	int data[MAX] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	sum(data, MAX);

	system("pause");
	return 0;
}
*/
