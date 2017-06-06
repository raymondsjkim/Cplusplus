#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	cout << "Please enter a file name: ";
	string filename;
	cin >> filename;
	ifstream in_file;
	in_file.open(filename.c_str());
	ofstream out_file;

	double column1;
	double column2;
	int count = 0;


	in_file.open("s:\\input.txt");
	if(in_file.fail())
	{
		cout << "In_file has failed" << endl;
		return 0;
	}
	
	while(in_file >> column1 >> column2)
	{
		out_file << column1 << column2;
		count++;
	}



	system("pause");
	return 0;
}
