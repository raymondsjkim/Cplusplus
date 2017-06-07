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

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream file("e:\\data.txt");
	
	double n = 0;
	double x = 0;
	double sum = 0, sum2 = 0, total = 0;
	
	cout << setw(14) << "Column 1" << setw(5) << " " << "Column 2" << endl;
	while (file >> n >> x)
	{
		cout << setw(12) << n << " " << setw(12) << x << endl;
		sum = sum + n;
		sum2 = sum2 + x;
		total++;
	}
	
	double average = sum / total;
	double avg2 = sum2 / total;
	
	cout << "sum: " << sum << endl;
	cout << "average: " << average << endl;
	cout << "sum2: " << sum2 << endl;
	cout << "avg2: " << avg2 << endl;
	
	system("pause");
    return 0;
}

*/
