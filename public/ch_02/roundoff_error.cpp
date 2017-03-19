#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double price = 4.35;
	int cents = 100 * price + 0.5; // add 0.05  for output to be 435.

	cout << "The amount is: $" << cents << endl;

	system("pause");
	return 0;

}
