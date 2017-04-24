#include <iostream>
using namespace std;

void sort2(int& a, int b)
{
	if (a > b) {
		b = a;
	}
}
int main()
{
	int u = 2;
	int v = 3;
	int w = 4;
	int x = 1;

	//   (a,b)
	//   (4,1)
	sort2(w, x); // swap to (1,4)
	cout << "w is now " << w << ", " << "x is now " << x << endl; 
  
	system("pause");
    return 0;
}

