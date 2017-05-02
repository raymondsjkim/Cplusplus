#include <iostream>
using namespace std;
/**
	This function find the sum of all the values in the array
*/
double sum(double data[], int size)
{
	double total = 0;
	for(int i = 0; i < size; i++)
	{
		total = total + data[i];
	}
	return total;
}
int main()
{
	const int NUM = 10;
	double values[NUM] = {32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65};

	double total_score = sum(values, NUM);

	cout << total_score << endl;


	system("pause");
    return 0;
}
