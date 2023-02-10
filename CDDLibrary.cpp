#include <iostream>
#include "List.h"


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
{//Creates two new lists
	List<int> list = List<int>();
	List<int> listTwo;

	//Tests adding several items to list in different ways and sorts them
	list.pushBack(5);
	list.pushFront(41);
	list.insert(20, 1);
	list.insert(50, -1);
	list.insert(40, 5);
	list.sort();

	//Inserts into list two, but then sets list two equal to list one
	listTwo.insert(60, 1);
	listTwo.sort();
	listTwo = list;

	//For the length of the list
	for (Iterator<int> iter = list.begin(); iter != list.end(); ++iter)
	{
		//If it contains 10, print success
		if (*iter == 10)
		{
			std::cout << "success" << std::endl;
		}
	}

	//Print the two lists
	listTwo.print();
	list.print();
}