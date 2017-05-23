#include <iostream>
using namespace std;


int main()
{
	int a = 1;
	int b = 2;
	int* p = &a;
	cout << *p << endl;

	p = &b;
	cout << *p << endl;

	system("pause");
    return 0;
}


/*
	int a = 1;
	int b = 2;
	int* p = &a;
	int* q = &b;
	*p = *q;

	cout << a << " " << b << endl; // output: 2 2
*/
