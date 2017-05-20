#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void print_grid(int num[], int size)
{ 
	cout << setw(4) << num[0] << "   |   " << num[1] << "   |   " << num[2] << endl;
	cout << setw(20) << "-----------------" << endl;
	cout << setw(4) << num[3] << "   |   " << num[4] << "   |   " << num[5] << endl;
	cout << setw(20) << "-----------------" << endl;
	cout << setw(4) << num[6] << "   |   " << num[7] << "   |   " << num[8] << endl;
}

int main()
{
	const int CAPACITY = 9;
	int arr[CAPACITY] = { 1,2,3,4,5,6,7,8,9 };

	

	
	print_grid(arr, CAPACITY);

	system("pause");
	return 0;
}
