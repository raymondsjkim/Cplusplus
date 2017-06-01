#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void process_name(ifstream& in_file, ofstream& out_file, double& total)
{
	string name;
	int count;
	double percent;
	in_file >> name >> count >> percent;

	if (total > 0)
	{
		cout << name << " ";
		out_file << name << " " << count << endl;
	}
	total = total - percent;
}

int main()
{
	ifstream in_file;
	ofstream out_file;
	in_file.open("s:\\babynames.txt");
	
	if (in_file.fail())
	{
		return 0;
	}
	out_file.open("s:\\output.txt");
	double boy_total = 50;
	double girl_total = 50;

	while (boy_total > 0 || girl_total > 0)
	{
		int rank;
		in_file >> rank;
		if (in_file.fail())
		{
			return 0;
		}
		cout << rank << " ";
		process_name(in_file, out_file, boy_total);
		process_name(in_file, out_file, girl_total);
		cout << endl;
	}
	system("pause");
	return 0;
}
