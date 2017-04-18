#include <iostream>
using namespace std;

int main()
{
	double min = 9999;
	double max = 0;
	double avg = 0;
	double range = 0;

	double sum = 0;
	double count = 0;
	double variable = 0;

	cout << "Enter values and enter any to execute (example: 12 13 14 h)" << endl 
		<< "Enter some values: ";

	while(cin >> variable) {
		if(cin.fail()) {
			break;
		}
		if(variable > max) {
			max = variable; // max
		}
		if(variable < min) {
			min = variable; // min
		}
		count++;
		sum = sum + variable;
	}
	
	avg = sum / count; // calc average
	range = max - min; // calc range

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Average: " << avg << endl;
	cout << "Range: " << range << endl;

	system("pause");
	return 0;
}
