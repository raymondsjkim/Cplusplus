#include <iostream>
using namespace std;

int main()
{
	double min = 9999;
	double max = 0;
	double avg = 0;
	double sum = 0;
	double count = 0;
	double variable = 0;

	cout << "Enter some values: ";

	while(cin >> variable) {
		if(cin.fail()) {
			break;
		}
		if(variable > max) {
			max = variable;
		}
		if(variable < min) {
			min = variable;
		}
		++count;;
		sum = sum + variable;
	}
	
	// fix avg
	avg = max / min;

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Average: " << avg << endl;
	cout << "Range: " << count << endl;
