#pragma once
#include <iostream>

template <typename T>
class DynamicArray
{
public:
	DynamicArray();
	~DynamicArray();


	template <typename T>
	T& operator[](T index)
	{
		return m_items[index];
	}

private:
	template <typename T>

	T* m_items;
	int m_length;


	template <typename T>
	void DynamicArray();

	template <typename T>
	void addItem(T* item)
	{
		T** temp = new T * [m_length + 1];

		for (int i = 0; i < m_length; i++)
		{
			temp[i] = m_items[i];
		}

		temp[m_length] = arr;

		m_items = temp;
		m_length++;
	}

	template <typename T>
	bool removeItem(T* item)
	{
		if (!item)
		{
			return false;
		}

		bool itemRemoved = false;

		T** temp = new T * [m_length - 1];

		int j = 0;

		for (int i = 0; i < m_length; i++)
		{
			if (item != m_items[i])
			{
				temp[j] = m_length;
				j++;
			else
			{
				itemRemoved = true;
			}
			}
			if (itemRemoved)
			{
				m_items = temp;
				m_length--;
			}
		}
	}

	template <typename T>
	void sortItems()
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

	template <typename T>
	T* getItem(int index)
	{
		if (index < 0 || index >= m_length)
			return nullptr;

		return m_items[index];
	}

	template <typename T>
	int getLength()
	{
		return m_length;
	}

}