/*
Description: This program opens a file from a user input and calculates the average of each data column
and displays a table in the out_file.
Author: Raymond Kim
Input Variables: col1, col2, sum1, sum2, count, avg1, avg2, filename, in_file, out_file.
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
Sums each column and calculates the average of each column and displays table in output file.
@param in_file the input stream
@param out_file the output stream
*/
void get_avg(ifstream& in_file, ofstream& out_file)
{
	double col1 = 0; // column1
	double col2 = 0; // column2
	double sum1 = 0, sum2 = 0, count = 0;
	out_file << setw(14) << "Column 1" << setw(5) << " " << "Column 2" << endl;
	while (in_file >> col1 >> col2)
	{
		out_file << setw(12) << col1 << " " << setw(12) << col2 << endl;
		sum1 = sum1 + col1; // sum col1
		sum2 = sum2 + col2; // sum col2
		count++; // total count in each column
	}
	double avg1 = sum1 / count; // average for col1
	double avg2 = sum2 / count; // average for col2
	cout << endl;
	out_file << "Average " << avg1 << setw(10) << " " << avg2 << endl;
	cout << endl;
}
int main()
{
	ifstream in_file;
	ofstream out_file;
	cout << "This program calucaltes the average of each column" << endl;
	cout << endl;
	cout << "Please enter a file name: ";
	string filename;
	cin >> filename;
	in_file.open(filename.c_str()); // open input stream
	if (in_file.fail()) // check for failure
	{
		cout << "In_file has failed" << endl;
		system("pause");
		return 0;
	}
	out_file.open("f:\\data_out.txt"); // open out_file
	cout << endl;
	cout << "Start of analysis.";
	get_avg(in_file, out_file); // call the get_avg function
	cout << "End of analysis." << endl;
	cout << endl;
	system("pause");
	return 0;
}
