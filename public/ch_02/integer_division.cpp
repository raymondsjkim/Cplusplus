// Common Error - Unintended Integer Division

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	
	double s1;
	double s2;
	double s3;

	double s4 = 3.0;

	cout << "Please enter your last three test scores: ";
	cin >> s1 >> s2 >> s3;

	double average = (s1 + s2 + s3) / s4;

	cout << "Your average score is " << average << endl;

	system("pause");
	return 0;

}
