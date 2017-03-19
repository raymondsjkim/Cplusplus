#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

	int p = 1000;
	double r = 0.06;
	int t = 4;
	int n = 10;
	double a;

	a = p*pow(1 + 0.06/4, 10);

	cout << "The return of the investment is: $" << a << endl;

	system("pause");
	return 0;

}
