#include <iostream>

using namespace std;

int main()
{
	int count = 0;

	++count;
	cout << "count++ is " << count << endl;
	
	count = 0;
	--count;
	cout << "--count is " << count << endl;
	
	count = 0;
	count++;
	cout << "count++ is " << count << endl;
	
	count = 0;
	count--;
	cout << "count-- is " << count << endl;


	system("pause");
	return 0;
}
