#include <iostream>
using namespace std;

/* This program finds the value of 100 in values[] */
int main()
{
	const double MAX = 10;
	double values[] = {1, 5, 165, 65.4, 2, 6, 100, 9, 10, 11};
	int pos = 0;
	bool found = false;

	while (pos < MAX && !found)
	{
		if (values[pos] == 100)
		{
			found = true;
		}
		else
		{
			pos++;
		}
	}
	cout << values[pos] << " " << found << endl;

	system("pause");
	return 0;
}
