#include <iostream>

using namespace std;

void withdraw(double& balance, double amount) { // & indicates a reference parameter (updates the balance)
	const double PENALTY = 10;
	if(balance >= amount) {
		balance = balance - amount;
	} else {
		balance = balance - PENALTY;
	}
}

int main()
{
	double harrys_account = 1000;
	double sallys_account = 500;
	
	withdraw(harrys_account, 100);
		// Now harrys_account is 900
	withdraw(harrys_account, 1000);
		// Now harrys_account is 890
	withdraw(sallys_account, 150);
	
	cout << "Harry's account: " << harrys_account << endl;
	cout << "Sally's account: " << sallys_account << endl;

	system("pause");
	return 0;
}
