#include <iostream>
using namespace std;

int main()
{
	/*
		for loop fills the array with squared values.
	*/
	const int SIZE = 10;
	int squares[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		squares[i] = i * i;
		cout << squares[i] << endl;
	}
	system("pause");
    return 0;
}
