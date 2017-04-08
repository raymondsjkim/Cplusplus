#include <iostream>
using namespace std;
int main()
{
	int value;
	do
	{
		cout << "Enter a value < 100: ";
		cin >> value;
	} while (value >= 100);

	cout << "The value input is: " << value << endl;

	system("pause");
    return 0;
}

