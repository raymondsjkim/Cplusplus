#include <iostream>
using namespace std;

int main()
{
	/* This finds the maximum value in the array */
	
  double values[] = {0, 1, 16, 9, 4};
	double largest = values[0];

	for(int i = 1; i < 5; i++)
	{
		if(values[i] > largest)
		{
			largest = values[i];
		}
	}
	cout << largest << endl;

	system("pause");
	return 0;
}
