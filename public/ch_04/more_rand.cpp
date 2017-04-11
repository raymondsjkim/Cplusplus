#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(time(0)); // seed rand() to produce different results.
	// Generates random numbers between 1 - 6.
	for(int i = 1; i <= 10; i++) {
		int d1 = rand() % 6 + 1;
		int d2 = rand() % 6 + 1;
		cout << d1 << " " << d2 << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
