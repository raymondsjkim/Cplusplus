#include <iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	int arr[MAX] = { 1, 2, 4 };
	int current_size = 0;

	for (int i = 0; i < MAX; i++)
	{
		if (arr[current_size] < MAX && arr[i] != 0)
		{
			current_size++;
		}
	}
	cout << current_size << endl;
