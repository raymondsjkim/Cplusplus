#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void get_avg(ifstream& in_file, ofstream& out_file, int& count)
{
	double col1, col2;
	double sum = 0;

	while (in_file >> col1 >> col2)
	{
		out_file << col1 << " " << col2 << endl;
		count++;

		sum = count + col1;
	}
	cout << sum << endl;
}

int main()
{
	int count = 0;
	
	ifstream in_file;
	ofstream out_file;
	
	in_file.open("f:\\data.txt");
	if (in_file.fail())
	{
		cout << "In_file has failed" << endl;
		system("pause");
		return 0;
	}
	out_file.open("f:\\data_out.txt");
	
	get_avg(in_file, out_file, count);


	system("pause");
	return 0;
}


/*
	Simple avg function (PUT IN MAIN)

/*
Description: This program opens a file from a user input and calculates the average of each data column.
Author: Raymond Kim
Input Variables: col1, col2, sum1, sum2, count, avg1, avg2, filename, in_file
Process Flow: Open file provided by the user. Calculate the sum of each column and get 
the average of each. Print the columnn and the averages of each.
Output Variable: Data table with the calculated averages.
*/
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
/**
	Sums each column and calculates the average of each column.
	@param in_file the input stream
*/
void get_avg(ifstream& in_file)
{
	double col1 = 0; // column1
	double col2 = 0; // column2
	double sum1 = 0, sum2 = 0, count = 0;
	cout << setw(14) << "Column 1" << setw(5) << " " << "Column 2" << endl;
	while (in_file >> col1 >> col2)
	{
		cout << setw(12) << col1 << " " << setw(12) << col2 << endl;
		sum1 = sum1 + col1; // sum col1
		sum2 = sum2 + col2; // sum col2
		count++; // total count in each column
	}
	double avg1 = sum1 / count; // average for col1
	double avg2 = sum2 / count; // average for col2
	cout << endl;
	cout << "Average " << avg1 << setw(10) << " " << avg2 << endl;
	cout << endl;
}
int main()
{
	cout << "This program calucaltes the average of each column" << endl;
	cout << endl;
	cout << "Please enter a file name: ";
	string filename;
	cin >> filename;
	ifstream in_file;
	in_file.open(filename.c_str()); // open input stream
	if (in_file.fail()) // check for failure
	{
		cout << "In_file has failed" << endl;
		system("pause");
		return 0;
	}
	cout << endl;
	get_avg(in_file); // call the get_avg function
	system("pause");
    return 0;
}


*/
