#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

using namespace std;

/**
	Computes the volume of a sphere.
	@param r is the radius of the sphere.
	@return the volume
*/
double sphere_volume(double r) {
	const double PI = M_PI;
	double volume = 4.0 / 3 * PI * pow(r,3);
	return volume;
}

int main()
{
	double result1 = sphere_volume(4);
	double result2 = sphere_volume(9);
	cout << "Result 1 is: " << result1 << endl;
	cout << "Result 2 is: " << result2 << endl;
	
	system("pause");
    return 0;
}
