/*
Description: This program calculates the volume and surface area of a sphere, cylinder, and cone.
Author: Raymond Kim
Input Variables: PI, r, h, volume_sphere, sphere_area, cyl_volume, cyl_area, cone_vol, cone_area, radius, height
Process Flow: Set up functions that calculate the volume and surface area for each case.
Prompt user to enter value for radius and height. Pass the values as arguments into each function to calculate.
Output Variables: Calculation from each formula.
*/
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = M_PI; // Global variable for pi
/**
Computes the volume of a sphere.
@param r is the radius of the sphere.
@return the volume_sphere
*/
double sphere_volume(double r) {
	double volume_sphere = 4.0 / 3 * PI * pow(r, 3);
	return volume_sphere;
}
/**
Computes the surface area of a sphere.
@param r is the radius of the sphere.
@return the sphere_area
*/
double sphere_surface(double r) {
	double sphere_area = 4 * PI * pow(r, 2);
	return sphere_area;
}
/**
Computes the volume of a cylinder.
@param r and h. r is radius h is height.
@return cyl_vol
*/
double cylinder_volume(double r, double h) {
	double cyl_vol = PI * pow(r, 2) * h;
	return cyl_vol;
}
/**
Computes the surface area of a cylinder.
@param r and h. r is radius h is height.
@return cyl_area
*/
double cylinder_surface(double r, double h) {
	double cyl_area = (2 * PI * r * h) + (2 * PI * pow(r, 2));
	return cyl_area;
}
/**
Computes the volume of a cone.
@param r and h. r is radius h is height.
@return cone_vol
*/
double cone_volume(double r, double h) {
	double cone_vol = PI * pow(r, 2) * (h / 3);
	return cone_vol;
}
/**
Computes surface area of a cone.
@param r and h. r is radius h is height.
@return cone_area
*/
double cone_surface(double r, double h) {
	double cone_area = PI * r * (r + sqrt(h * h + r * r));
	return cone_area;
}
int main()
{
	cout << "Volume and Surface Area Formula's" << endl;
	cout << endl;
	cout << "Enter a value for radius: ";
	double radius;
	cin >> radius;
	cout << "Enter a value for height: ";
	double height;
	cin >> height;
	cout << endl;
	cout << "Volume of the sphere is: " << sphere_volume(radius) << endl;
	cout << "Surface area of the sphere is: " << sphere_surface(radius) << endl;
	cout << endl;
	cout << "Volume of the cylinder is: " << cylinder_volume(radius, height) << endl;
	cout << "Surface area of the cylinder is: " << cylinder_surface(radius, height) << endl;
	cout << endl;
	cout << "Volume of the cone is: " << cone_volume(radius, height) << endl;
	cout << "Surface area of the cone is: " << cone_surface(radius, height) << endl;

	system("pause");
	return 0;
}
