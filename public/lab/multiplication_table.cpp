/*
Description: This program prints a multiplication table.

Author: Raymond Kim

Input Variables: a) head_max b) row_max c) i d) r

Process Flow: For i is 1 and is less than or equal to head_max, increment by one (prints header row).
For r is 2 and is less than or equal to row_max, increment by 1 (prints first column) 
but (note: nested for loop) For mult is 1 and is less than or equal to row_max, increment by 1 
while multiplying mult * r (calculate and print the multiplaction table).

Output Variable: Multiplication table
*/
#include "stdafx.h"
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
	// Print header row.
	for (i = 1; i <= head_max; i++) {
		cout << setw(4) << i << setw(4);
	}
	cout << endl;
	// Print table body
	for (int r = 2; r <= row_max; r++) {
		cout << setw(4);
		// Print multiplication table rows
		for (int mult = 1; mult <= row_max; mult++) {
			cout << mult * r << setw(4);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

