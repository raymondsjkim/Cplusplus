#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double wkly_income = 0;
	string name;
	double hr_wage;
	double hrs_worked;
	const double INTEREST = 1.5;
	const double FULL_WK_HRS = 40; // full-time 40 hours a week

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your hourly wage: ";
	cin >> hr_wage;
	cout << "Enter number of hours worked in 1 week: ";
	cin >> hrs_worked;

	if (cin.fail())
	{
		cout << "Error: Not an integer." << endl;
	}


	if(hrs_worked <= FULL_WK_HRS)
	{
		wkly_income = hr_wage * hrs_worked;
	}
	else if(hrs_worked > FULL_WK_HRS) 
	{
		wkly_income = (hr_wage * hrs_worked) * INTEREST;
	}
	cout << name << " you earned $"
		<< fixed << setprecision(2) << wkly_income
		<< " this week." << endl;

	system("pause");
	return 0;
}
