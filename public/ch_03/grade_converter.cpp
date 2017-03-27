#include <iostream>
#include <string>

using namespace std;

int main()
{
	double num_grade = 0;
	string letter_grade;

	cout << "Enter a valid letter grade (Example: A+) : ";
	cin >> letter_grade;

	if (letter_grade == "A+")
	{
		num_grade = 4.0;
	}
	else
	{
		if (letter_grade == "A")
		{
			num_grade = 4.0 - 0.15;
		}
		else
		{
			if (letter_grade == "A-")
			{
				num_grade = 4.0 - 0.3;
			}
			else
			{
				if (letter_grade == "B+")
				{
					num_grade = 3.0;
				}
				else
				{
					if (letter_grade == "B")
					{
						num_grade = 3.0 - 0.15;
					}
					else
					{
						if (letter_grade == "B-")
						{
							num_grade = 3.0 - 0.3;
						}
						else
						{
							if (letter_grade == "C+")
							{
								num_grade = 2.0;
							}
							else
							{
								if (letter_grade == "C")
								{
									num_grade = 3.0 - 0.15;
								}
								else
								{
									if (letter_grade == "C-")
									{
										num_grade = 2.0 - 0.3;
									}
									else
									{
										if (letter_grade == "D+")
										{
											num_grade = 1.0;
										}
										else
										{
											if (letter_grade == "D")
											{
												num_grade = 1.0 - 0.15;
											}
											else
											{
												if (letter_grade == "D-")
												{
													num_grade = 1.0 - 0.3;
												}
												else
												{
													if (letter_grade == "F")
													{
														num_grade = 0;
													}
													else
													{
														cout << "Error: Not a valid letter grade." << endl;
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

	cout << "You number grade is: " << num_grade << endl;
	system("pause");
	return 0;


}
