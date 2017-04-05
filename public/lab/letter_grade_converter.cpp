/*
Description: This program prints a letter grade A-F into a number grade 4-0.

Author: Raymond Kim

Input Variables: a) num_grade b) letter_grade c) INCR_DECR

Process Flow: Prompt user to enter a valid letter grade (ex: A+, a-, d+, F).
			  A, B, C, D, F is 4, 3, 2, 1 where A+ and A is equal to 4 and F is 0.
			  Increase and decrease by 0.3 for + and - grades (ex: B+ is 3.3 and B- is 2.7).
			  Prompt user there number grade according to letter grade input.

Output Variable: Number grade.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double num_grade = 0; // initalize the grade to 0
	const double INCR_DECR = 0.3; // increase or decrease by + or - grades
	string letter_grade; // user input letter grade

	cout << "Enter a valid letter grade (Example: A+ or a+): ";
	cin >> letter_grade;

	if (letter_grade == "A+" || letter_grade == "a+")
	{
		num_grade = 4.0;
	}
	else
	{
		if (letter_grade == "A" || letter_grade == "a")
		{
			num_grade = 4.0;
		}
		else
		{
			if (letter_grade == "A-" || letter_grade == "a-")
			{
				num_grade = 4.0 - INCR_DECR;
			}
			else
			{
				if (letter_grade == "B+" || letter_grade == "b+")
				{
					num_grade = 3.0 + INCR_DECR;
				}
				else
				{
					if (letter_grade == "B" || letter_grade == "b")
					{
						num_grade = 3.0;
					}
					else
					{
						if (letter_grade == "B-" || letter_grade == "b-")
						{
							num_grade = 3.0 - INCR_DECR;
						}
						else
						{
							if (letter_grade == "C+" || letter_grade == "c+")
							{
								num_grade = 2.0 + INCR_DECR;
							}
							else
							{
								if (letter_grade == "C" || letter_grade == "c")
								{
									num_grade = 3.0;
								}
								else
								{
									if (letter_grade == "C-" || letter_grade == "c-")
									{
										num_grade = 2.0 - INCR_DECR;
									}
									else
									{
										if (letter_grade == "D+" || letter_grade == "d+")
										{
											num_grade = 1.0 + INCR_DECR;
										}
										else
										{
											if (letter_grade == "D" || letter_grade == "d")
											{
												num_grade = 1.0;
											}
											else
											{
												if (letter_grade == "D-" || letter_grade == "d-")
												{
													num_grade = 1.0 - INCR_DECR;
												}
												else
												{
													if (letter_grade == "F" || letter_grade == "f")
													{
														num_grade = 0;
													}
													else
													{
														cout << "Error: Not a valid letter grade." << endl; // error message if user does not enter a valid letter grade.
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}



	cout << "You number grade is: " << num_grade << endl; // Prompt user number grade.
	system("pause");
	return 0;
}
