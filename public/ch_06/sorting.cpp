#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	double values[] = {32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65};
	int current_size = 10;
	
	sort(values, values + current_size);

	for(int i = 1;i < current_size; i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;

	system("pause");
    return 0;
}
