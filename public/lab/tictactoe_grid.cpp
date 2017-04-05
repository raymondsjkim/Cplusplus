/*
Description: This program prints a grid to play tic-tac-toe.

Author: Raymond Kim

Input Variables: a) row b) column

Process Flow: Create two strings that prints a pattern shaped like a comb.
Print the comb three times and base for the bottom line.

Output Variable: Tic-tac-toe grid.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string row = "+--+--+--+"; // horizontal lines
	string column = "|  |  |  |"; // vertical lines. Two spaces between each line.

	cout << row << endl << column << endl // comb 1
		<< row << endl << column << endl // comb 2
		<< row << endl << column << endl // comb 3
		<< row << endl; // base of the grid

	system("pause");
	return 0;
}
