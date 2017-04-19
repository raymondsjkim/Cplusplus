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
	double sphere_vol = 4.0 / 3 * PI * pow(r, 3);
	return sphere_vol;
}
/**
Computes the surface area of a sphere.
@param r is the radius of the sphere.
@return the sphere_area
*/
double sphere_surface(double r) {
	const double PI = M_PI;
	double sphere_area = 4 * PI * pow(r, 2);
	return sphere_area;
}

int main()
{
	cout << "Enter values for radius and height and hit enter \nkey to execute the program (example: 2 4; r=2 & h=4): "
		<< " ";
	double radius;
	double height;
	cin >> radius;
	cin >> height;

	cout << "Volume of the sphere is: " << sphere_volume(radius) << endl;
	cout << "Surface area of the sphere is: " << sphere_surface(radius) << endl;

	system("pause");
	return 0;
}
