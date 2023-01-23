#include <iostream>


template <typename T>
void BubbleSort(T arr[], int size)
{

	for (int i = 0; i < size - 1, i++;)
	{
		bool swapped = false;

		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}

template< typename T>
void printArray(T array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << " " << array[i];
	}
	std::cout << "\n";
}

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{





	return 0;
}