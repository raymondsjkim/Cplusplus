#include <iostream>
using namespace std;

int main()
{
	/*
		for loop fills the array values with zeros.
	*/
	const int SIZE = 10;
	int values[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		values[i] = 0;
		cout << values[i] << endl;
	}
	system("pause");
    return 0;
}
