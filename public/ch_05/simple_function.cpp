#include <iostream>
using namespace std;

double cube_volume(double side_length) {
	double volume = side_length * side_length * side_length;
	return volume;
}

int main()
{
	double z = cube_volume(2);
	cout << z << endl;

	system("pause");
	return 0;
}
