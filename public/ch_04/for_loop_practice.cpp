/*
	Print out even number from 10-20 (including 20).
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	for (i = 10; i <= 20; i = i + 2) {
		cout << i << endl;
	}
	system("pause");
    return 0;
}
