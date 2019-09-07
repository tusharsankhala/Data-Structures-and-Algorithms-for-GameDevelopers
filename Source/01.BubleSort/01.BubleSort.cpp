// 01.BubleSort.cpp : Simple implementation of the buble sort.
//

#include <iostream>

template <class T>
void BubbleSort(T arr[], int size)
{
	bool swapMade = false;
	for (int i= 0; i < size; i++)
	{
		for (int j = size - 1; j >= i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				T temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;

				swapMade = true;
			}
		}

		if (!swapMade)
		{
			break;
		}
	}

	std::cout << "\nSorted array is\n";
	for (int k = 0; k < size; k++)
	{
		std::cout << arr[k] << ",";
	}
}

// Main Function
int main()
{
    std::cout << "Original Integer Array\n";
	int intArray[] = {4, 11, 6, -7, 88, 41, 37};
	int noOfElements = sizeof(intArray) / sizeof(intArray[0]);
	for (int i = 0; i < noOfElements; i++)
	{
		std::cout << intArray[i] << " ,";
	}

	BubbleSort(intArray, noOfElements);


	std::cout << "\n\nOriginal Float Array\n";
	float floatArray[] = { 4.7f, -1.2f, 6.9f, -7.0f, 6.9f, 14.1f, -37.6f };
	noOfElements = sizeof(floatArray) / sizeof(floatArray[0]);
	for (int i = 0; i < noOfElements; i++)
	{
		std::cout << floatArray[i] << " ,";
	}

	BubbleSort(floatArray, noOfElements);
}