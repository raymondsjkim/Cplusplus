#include <iostream>
using namespace std;

int main()
{
	int a[] = {2,3,5};
	int* p = a;
	
	cout << *p << " ";
	
	p++;
	*p = 0;
	
	cout << *p << " ";
	
	p++;
	
	cout << *p << endl;

	system("pause");
	return 0;
}

/*
	int a[] = {2,3,5};
	
	int* p = a;
	cout << *p << " ";
	
	int* q = a + 2;
	p++;
	cout << *p << " ";
	
	q--;
	*p = *q;
	p++;
	cout << *p << endl;
	// output: 2 3 5

*/
