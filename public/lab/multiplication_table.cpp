/*
Description: This program prints a multiplication table.
Author: Raymond Kim
Input Variables: a) MAX b) i c) r d) mult
Process Flow: For i is 1 and is less than or equal to MAX, increment by one (prints header row).
For r is 2 and is less than or equal to MAX, increment by 1 (prints first column) 
but (note: nested for loop) For mult is 1 and is less than or equal to MAX, increment by 1 
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
	const int MAX = 10;
	// Print header row.
	for (int i = 1; i <= MAX; i++) {
		cout << setw(4) << i << setw(4);
	}
	cout << endl;
	// Print table body
	for (int r = 2; r <= MAX; r++) {
		// Print multiplication table rows
		for (int mult = 1; mult <= MAX; mult++) {
			cout << mult * r << setw(4);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

