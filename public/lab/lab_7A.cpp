/*
Description: This program processes 50 percent of common boy and girl names from babynames.txt into output.txt
Author: Raymond Kim
Input Variables: name, count, percent, in_file, out_file, total, boy_total, girl_total, rank, names_total
Process Flow: Open input stream and output stream, while girl and boy total is greater than 0,
process the name, count, and percent from babynames.txt to output.txt, adjust the total.
Output Variable: 50 percent of the common boy and girl names.
*/
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/**
	Reads name, count, and percent information, copy name and count into output file if total >= 0, and adjust the total
	@param in_file the input stream
	@param out_file the output stream
	@param total the total percentage that should still be processed
*/
void process_name(ifstream& in_file, ofstream& out_file, double& total)
{
	string name;
	int count;
	double percent;
	in_file >> name >> count >> percent;
	if (total > 0)
	{
		out_file << name << " " << count << endl; // send to output file
	}
	total = total - percent;
}
int main()
{
	int names_total = 0;
	// Define the input and output streams
	ifstream in_file;
	ofstream out_file;
	// open the input stream
	in_file.open("s:\\babynames.txt");
	if (in_file.fail()) // check for failure after opening
	{
		return 0;
	}
	// open output stream
	out_file.open("s:\\output.txt");
	double boy_total = 50;
	double girl_total = 50;
	cout << "Starting of analysis." << endl;
	// process frequencies until it reaches 50 percent
	while (boy_total > 0 || girl_total > 0)
	{
		int rank;
		in_file >> rank;
		if (in_file.fail())
		{
			return 0;
		}
		else
		{
			names_total++;
			process_name(in_file, out_file, boy_total);
			process_name(in_file, out_file, girl_total);
		}
	}
	cout << "Total number of names: " << names_total << endl;
	cout << "End of analysis." << endl;
	cout << endl;
	system("pause");
	return 0;
}
