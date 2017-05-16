#include <iostream>
using namespace std;

int main()
{
	const int COUNTRIES = 7;
	const int MEDALS = 3;

	int counts[COUNTRIES][MEDALS] = 
	{
		{1,0,1},
		{1,1,0},
		{6,0,1},
		{1,0,0},
		{0,1,1},
		{0,1,1},
		{1,1,0}
	};
	/* Accessing an element */
	int value = counts[2][0];
	cout << value << endl; // output is 6

	system("pause");
    return 0;
}
