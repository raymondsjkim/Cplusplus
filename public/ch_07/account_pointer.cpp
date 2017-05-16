#include <iostream>
using namespace std;

int main()
{
	double harrys_account = 0;
	double joint_account = 2000;
	double* account_pointer = &harrys_account;

	*account_pointer = 1000; // Initial deposit

	*account_pointer = *account_pointer - 100; // Withdraw $100
	cout << "balance: " << *account_pointer << endl; // Print balance

	// Change the pointer value
	account_pointer = &joint_account;

	// The same statement affect a different account
	*account_pointer = *account_pointer - 100; // Withdraw $100
	cout << "balance: " << *account_pointer << endl; // Print balance

	system("pause");
	return 0;
}
