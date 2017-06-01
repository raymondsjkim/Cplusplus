#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string name;
	string value;

	ifstream in_file;
	in_file.open("s:\\input.txt");
	if (in_file.fail())
	{
		return 0;
	}
	
	ofstream out_file;
	out_file.open("s:\\output.txt");


	while(in_file >> name >> value)
	{
		out_file << name << " " << value << endl;
	}


	system("pause");
	return 0;
}
