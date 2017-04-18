#include <iostream>
using namespace std;

int main()
{
	double min = 0;
	double max = 0;
	double sum = 0;
	double count = 0;
	double avg = 0;

	cout << "Enter values: ";
	double values;
	
	// http://stackoverflow.com/questions/7425318/multiple-inputs-on-one-line
	
	while(cin >> values) 
	{
		if(cin.fail()) {
			if(max > values) {
				max = values;
			}
		}
	}
	cout << max << endl;


	system("pause");
	return 0;
}
