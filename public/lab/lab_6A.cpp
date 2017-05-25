#include <iostream>
using namespace std;

int read_inputs(double arr[], int size)
{
	int current_size = 0;
	double input;
	cout << "Please enter 10 values to be in the array, Enter Q to execute the program: ";
	bool more = true;
	while (more)
	{
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < size)
		{
			arr[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}
void reverse(double* a, int size)
{
	double* beg_arr_pointer = a;
	double* end_pointer = beg_arr_pointer + size - 1;
	while (beg_arr_pointer< end_pointer)
	{
		double temp = *beg_arr_pointer;
		*beg_arr_pointer = *end_pointer;
		*end_pointer = temp;
		beg_arr_pointer++;
		end_pointer--;
	}

}
void print(double a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	const int CAP = 1000;
	double myArr[CAP];

	double size = read_inputs(myArr, CAP);
	reverse(myArr, size);
	print(myArr, size);

	system("pause");
    return 0;
}
