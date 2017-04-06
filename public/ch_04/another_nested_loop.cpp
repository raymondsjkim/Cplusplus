#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int i;
	int j;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if((i + j) % 2 == 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
