/*
Description: This program computes the total price between two vehicles and determines which is a better deal.
Total price for keeping the car for 10 years, 15000 mi annually, with gas at $4 per gallon.

Author: Raymond Kim

Input Variables:  YEAR, GAS_PRICE, TOTAL_MILES, purchase1, purchase2, mpg1, mpg2,
maintenance1, maintenance2, operating_cost1, operating_cost2,
total_cost1, total_cost2.

Process Flow: Prompt user to input price, mpg, and maintenance for each car1 and car2.
Calculate the total price for each car.
Prompt user the total price.
If total_cost1 < total_cost2, message "Choose car1."

Output Variable: Total prices for each vehicle purchase and better deal.
*/

#include <iostream>

using namespace std;

int main()
{
	const int YEAR = 10; // Total price for 10 years
	const int GAS_PRICE = 4; // $4 per gallon
	const int TOTAL_MILES = 15000; // miles annually

	/* Car 1 */
	int purchase1;
	int mpg1;
	int maintenance1;
	int operating_cost1;
	int total_cost1;

	cout << "Enter vehicle starting price for car 1: ";
	cin >> purchase1; // User input car 1 price.
	
	cout << "Enter the MPG for car 1: ";
	cin >> mpg1; // User input car 1 mpg
	
	cout << "Enter maintanence price for car 1: "; 
	cin >> maintenance1; // User input car 1 maintenence.
	
	operating_cost1 = TOTAL_MILES / mpg1 * GAS_PRICE * YEAR + maintenance1; // Calculate operating cost for 10 years for car 1.
	
	total_cost1 = purchase1 + operating_cost1; // Calculate total cost for car 1.
	cout << "Total cost for car 1 is: " << total_cost1 << endl; // Prompt total price for car 1.

	/* Car 2 */
	int purchase2;
	int mpg2;
	int maintenance2;
	int operating_cost2;
	int total_cost2;

	cout << "Enter vehicle starting price amount for car 2: ";
	cin >> purchase2; // User input car 2 price.
	
	cout << "Enter the MPG for car 2: ";
	cin >> mpg2; // User inpit mpg for car 2.
	
	cout << "Enter the maintanence price for car 2: ";
	cin >> maintenance2; // User input maintenance for car 2.
	
	operating_cost2 = TOTAL_MILES / mpg2 * GAS_PRICE * YEAR + maintenance2; // Calculate operating cost for 10 years for car 2.
	
	total_cost2 = purchase2 + operating_cost2; // Calculate total cost for car 2.
	cout << "Total cost for car 2 is: " << total_cost2 << endl; // Prompt total price for car 2.

	/* Determine which is a better deal */
	if (total_cost1 > total_cost2)
	{
		cout << "Choose car 2." << endl;
	}
	else
	{
		cout << "Choose car 1." << endl;
	}

	system("pause");
	return 0;
}

