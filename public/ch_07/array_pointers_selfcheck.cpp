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
