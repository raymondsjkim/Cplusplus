#include <iostream>
#include <string>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{ 
	for (int i = 0; i < a_size; i++) {
		cout << a[i] << endl;
	}
	return 0;
}

int main()
{
	const int MAX = 3;
	int a[MAX] = { 2, 4, 6 };
	int b[MAX] = { 1, 3, 5 };

	int equal = equals(a, MAX, b, MAX);
	cout << equal << endl;
	
	system("pause");
	return 0;
}
