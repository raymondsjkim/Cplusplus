#include <iostream>
using namespace std;

/*	read  the inputs in the array and find the current size of the array	*/
int read_inputs(double inputs[], int capacity) 
{
	int current_size = 0;
	cout << "Please eneter values, Q to exit: " << endl;
	bool more = true;
	while(more)
	{
		double input;
		cin >> input;
		if(cin.fail())
		{
			more = false;
		}
		else if(current_size < capacity)
		{
			inputs[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}
/*	Find the minimum value in array	*/
void minimum(double inputs[], int size) {
	double minimum = inputs[0];
	for(int i = 0; i < size; i++)
	{
		if(inputs[i] < minimum)
		{
			minimum = inputs[i];
		}
	}
	cout << "The minimum value in the array " << minimum << endl;
}

int main()
{
	const int CAPACITY = 1000;
	double values[CAPACITY];
	int size = read_inputs(values, CAPACITY);
	minimum(values, size);

	system("pause");
	return 0;
}
