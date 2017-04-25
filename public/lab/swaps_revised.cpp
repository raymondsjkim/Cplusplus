/*
Description: This functions swaps the values 
             of a and b if x > y, otherwise leave it unchanged.
Author: Raymond Kim
Input Variables: a, b, swap, x, y
Process Flow: Set up function void sort2() with reference parameters a and b.
			  Prompt user for x and y.	
			  If x > y swap a and b in sort2(), otherwise keep it the same.
Output Variables: Output with same values or output with swapped values.
*/
#include <iostream>
#include <iomanip>
using namespace std;

/**
Swaps a and b if a > b, otherwise leave same
@param a for value x
@param b for value y
*/
void sort2(int& a, int& b)
{
	int swap = a; // initial a
	/* swap if a > b */
	if (swap > b)
	{
		a = b; // swap a to b
		b = swap; // swap b to intial a
	}
}
int main()
{
	cout << setw(10) << "Swap x and y Values (x, y) if x > y:" << endl;
	cout << endl;
	cout << "Enter a value for x and y with a space between: ";
	int x;
	int y;
	cin >> x >> y;
	if (x > y) 
	{
		sort2(x, y); // swap 
		cout << "x is now " << x << ", " << "y is now " << y << endl;
	}
	else
	{
		sort2(x, y); // stay 
		cout << "x is still " << x << ", " << "y is still " << y << endl;
	}
	system("pause");
	return 0;
}
