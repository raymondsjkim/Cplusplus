#include <iostream>

using namespace std;

int main()
{
	int i = 5;
	while (i > 0) {
		// i--; // output: 4 3 2 1 0
		cout << i << " ";
		i--; // output: 5 4 3 2 1
	}

	system("pause");
	return 0;
}
