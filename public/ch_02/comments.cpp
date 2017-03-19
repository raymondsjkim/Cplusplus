/*
Description: This program computes the volume (in liters) of a six-pack of soda 
			 cans and the total volume of a six-pack and a two-liter bottle.

Author: Raymond Kim

Input Variables: cans_per_pack, CAN_VOLUME, total_volume, BOTTLE_VOLUME

Process Flow: Total volume for cans
			  Prompt user the volume for cans.
			  Total volume for bottles.
			  Prompt user for the volume for bottles.

Output Variable: Total volume for can and bottle.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

	int cans_per_pack = 6;
	const double CAN_VOLUME = 0.355; // Liters in a 12oz can
	double total_volume = cans_per_pack * CAN_VOLUME; // total volume for can

	cout << "A six-pack of 12oz cans contains " 
		<< total_volume << " liters." << endl; // Prompt user the total volume for can

	const double BOTTLE_VOLUME = 2; // Two-liter bottle
	total_volume = total_volume + BOTTLE_VOLUME; // total volume for bottle

	cout << "A six-pack and a two-liter bottle contain " 
		<< total_volume << " liters." << endl; // Prompt user the total volume for bottle

	cin.get();
	return 0;
}

