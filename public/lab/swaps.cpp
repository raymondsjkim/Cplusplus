/*
Description: This functions swaps the values 
of a and b if a > b, otherwise leave it unchanged.
Author: Raymond Kim
Input Variables: a, b, swap, u, v, w, x
Process Flow: Set up function void sort2() with reference parameters a and b.
Call sort2() function with number value.
If a > b swap a and b, others keep it the same.
Output Variables: Output that is the same and output that has been swapped.
*/
#include <iostream>
using namespace std;

/**
Swaps a and b if a > b, otherwise leave same
@param a for value x
@param b for value y
*/
void sort2(int& a, int& b)
{
	int swap = a; // initial a
	/* 
		swap if a > b 
	*/
	if (swap > b) 
	{
		a = b; // swap a to b
		b = swap; // swap b to intial a
	}
}
int main()
{
	int u = 2;
	int v = 3;
	int w = 4;
	int x = 1;
	sort2(u, v); // stay (2,3)
	sort2(w, x); // swap to (1,4)
	cout << "u is still " << u << ", " << "v is stil " << v << endl;
	cout << "w is now " << w << ", " << "x is now " << x << endl;

	system("pause");
	return 0;
}
