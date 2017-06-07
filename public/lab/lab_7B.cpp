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

	double n = 0;
	double sum = 0, total = 0;

	fstream file("f:\\data.txt");
	while (file >> n) // or while(cin >> n) to read from stdin, commandline
	{
		sum += n;
		total++;
	}

	double average = sum / total;

	cout << "sum: " << sum << endl;
	cout << "average: " << average << endl;
*/
