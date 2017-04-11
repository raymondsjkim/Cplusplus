#include <iostream>
using namespace std;

int main()
{
	const double RATE = 0.05;
	const double INIT_BAL = 10000;
	const double END_BAL = 20000;
	int year = 0;
	double balance = INIT_BAL;

	while (balance < END_BAL) {
    year++;
		double interest = balance * RATE;
		balance = balance + interest;
	}
	cout << year << endl;
  
	system("pause");
	return 0;
}

