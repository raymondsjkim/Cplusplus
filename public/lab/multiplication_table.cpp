#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int head_max = 10;
	int row_max = 10;
	int i;

	for (i = 1; i <= head_max; i++) {
		cout << i << setw(10) << " ";
	}
	cout << endl;

	for (int r = 2; r <= row_max; r++) {
		for (int mult = 1; mult <= row_max; mult++) {
			cout << mult * r << setw(10) << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
