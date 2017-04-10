#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	// Print random number between 10 and 100.
	srand(time(0));
	int i = rand() % 90 + 10;
	cout << i << endl;

	system("pause");
	return 0;
}
