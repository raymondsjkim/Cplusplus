#include <iostream>
#include <string>

using namespace std;


int main()
{
	const double RATE1 = 0.10; // tax for single under $32,000, married under $64,000
	const double RATE2 = 0.25; // tax for single over $32,000, married over $64,000
	const double RATE1_SINGLE_LIMIT = 32000;
	const double RATE1_MARRIED_LIMIT = 64000;

	/* Good code practice to initialize variables. */
	double tax1 = 0;
	double tax2 = 0;

	double income;
	cout << "Please enter your income: ";
	cin >> income;

	cout << "Please enter s for single, m for married: ";
	string marital_status;
	cin >> marital_status;

	if (marital_status == "s")
	{
		if(income <= RATE1_SINGLE_LIMIT)
		{
			tax1 = RATE1 * income; 
		}
		else
		{
			tax1 = RATE1 * RATE1_SINGLE_LIMIT;
			tax2 = RATE2 * (income - RATE1_SINGLE_LIMIT);
		}
	}
	else
	{
		if (income <= RATE1_MARRIED_LIMIT)
		{
			tax1 = RATE1 * income;
		} 
		else
		{
			tax1 = RATE1 * RATE1_MARRIED_LIMIT;
			tax2 = RATE2 * (income - RATE1_MARRIED_LIMIT);
		}
	}

	double total_tax = tax1 + tax2;

	cout << "The total is $" << total_tax << endl;

	system("pause");
    return 0;
}
