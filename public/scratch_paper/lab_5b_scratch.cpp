#include <iostream>
#include <string>
using namespace std;

int read_inputs(int values[], int capacity)
{
	int current_size = 0;
	cout << "Enter numbers with duplicates, Q to exit: ";
	bool more = true;
	while (more)
	{
		int input;
		cin >> input;
		if (cin.fail())
		{
			more = false;
		}
		else if (current_size < capacity)
		{
			values[current_size] = input;
			current_size++;
		}
	}
	return current_size;
}

 void remove_duplicates(int arr[], int& size)
{
   for(int i=0;i<size;i++)
   {
	for(int j=i+1;j<size;)
	{
		if(arr[i]==arr[j])
		{
			for(int k=j;k<size;k++)
			{
				arr[k]=arr[k+1];

			}
			size--;
		}
		else
		{
			j++;
		}
	}
   }
}

 void print(int arr[], int size)
{
   for(int i=0;i<size;i++)
   {
      cout<<arr[i]<<"  ";
    }
 }

int main()
{
	const int MAX = 100;
	int arr[MAX];

	int input_size = read_inputs(arr, MAX);
	remove_duplicates(arr, input_size);
	print(arr, input_size);

	cout << endl;
	system("pause");
	return 0;
}
