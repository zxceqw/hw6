#include <iostream>
#include <ctime>
using namespace std;

void BubbleSort(int* arr, const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void BubbleSort(double* arr, const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}



int main()
{
	srand(time(NULL));
	cout << "Sorting integers:" << endl;
	const int SIZE = 10;
	int arr1[SIZE];

	cout << "array: ";
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % SIZE;
		cout << arr1[i] << " ";
	}

	BubbleSort(arr1, SIZE);
	
	cout << endl << "sorted array: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr1[i] << " ";
	}

	cout << endl <<  "---------------------------------------" << endl << "Sorting fractionals numbers:" << endl;

	double arr2[SIZE];

	cout << "array: ";
	for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = (rand() % (SIZE*10)) / 10.0;
		cout << arr2[i] << " ";
	}

	BubbleSort(arr2, SIZE);

	cout << endl << "sorted array: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}