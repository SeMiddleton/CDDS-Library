//#include "List.h"
//
//
//template<typename T>
//bool checkOrder(List<T>& list)
//{
//	if (list.getLength() != 5)
//		return false;
//
//	int i = 1;
//	for (Iterator<T> iter = list.begin(); iter != list.end(); ++iter)
//	{
//		if (*iter != i)
//			return false;
//
//		i++;
//	}
//
//	return true;
//}
//int startTest()
//{
//	float score = 0;
//
//	score++;
//
//	try
//	{
//		List<int>* list = new List<int>();
//		list->pushBack(1);
//		list->pushFront(2);
//		list->destroy();
//		list->destroy();
//
//		list->print();
//		list->pushBack(3);
//		list->pushBack(1);
//		list->pushBack(2);
//		int val = 0;
//
//		for (Iterator<int> iter = list->begin(); iter != list->end(); ++iter)
//		{
//			val += *iter;
//			if (val > 6)
//			{
//
//				std::cout << "When used in a for loop, the iterator doesn't stop as it should. This could be a problem with the start or end function" << std::endl;
//				throw std::exception();
//			}
//		}
//
//		if (val != 6)
//		{
//			std::cout << "When used in a for loop, the iterator doesn't stop as it should. This could be a problem with the start or end function" << std::endl;
//			throw std::exception();
//		}
//
//		list->print();
//		Iterator<int> iter;
//		list->getData(iter, 0);
//		list->insert(3, 3);
//		list->remove(1);
//		list->sort();
//
//		if (list->contains(1))
//		{
//			std::cout << "The list still contains items that were passed into the remove function" << std::endl;
//			throw std::exception();
//		}
//
//		delete list;
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	score++;
//
//	try
//	{
//
//		//1/2
//		List<int> list = List<int>();
//
//		list.insert(3, 0);
//		list.insert(2, 0);
//		list.pushFront(1);
//		list.pushBack(5);
//		list.insert(4, 3);
//
//		Iterator<int> iter;
//
//		if (!list.getData(iter, 4) || *iter != 5)
//		{
//			std::cout << "Get data function doesn't give the iterator passed in the correct value" << std::endl;
//			throw std::exception();
//		}
//
//		if (!checkOrder(list))
//		{
//			std::cout << "The list order is not correct when multiple add node functions are used in succession" << std::endl;
//			throw std::exception();
//		}
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	score++;
//
//	try
//	{
//		//1/2
//		List<int> list = List<int>();
//
//		list.destroy();
//		list.pushFront(5);
//		list.pushFront(4);
//		list.pushFront(3);
//		list.pushFront(2);
//		list.pushFront(1);
//
//		if (!checkOrder(list))
//		{
//			std::cout << "The list order is not correct when the push front function is used to add nodes" << std::endl;
//			throw std::exception();
//		}
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	score++;
//
//	try
//	{
//		//1/2
//		List<int> list = List<int>();
//		list.pushBack(1);
//		list.pushBack(2);
//		list.pushBack(3);
//		list.pushBack(4);
//		list.pushBack(5);
//
//		if (!checkOrder(list))
//		{
//			std::cout << "The list order is not correct when the push back function is used to add nodes" << std::endl;
//			throw std::exception();
//		}
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	score++;
//
//	try
//	{
//		//1/2
//		List<int> list = List<int>();
//
//		list.insert(5, 0);
//		list.insert(1, 0);
//		list.insert(2, 1);
//		list.insert(3, 2);
//		list.insert(4, 3);
//
//		if (!checkOrder(list))
//		{
//			std::cout << "The list order is not correct when the insert function is used to add nodes" << std::endl;
//			throw std::exception();
//		}
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	score++;
//
//	try
//	{
//		//1/2
//		//return 0;
//		List<int> list = List<int>();
//
//		list.insert(1, 0);
//		list.insert(3, 0);
//		list.pushFront(4);
//		list.pushBack(2);
//		list.insert(5, 3);
//		list.sort();
//
//		if (!checkOrder(list))
//		{
//			std::cout << "The list order is not correct after sorting" << std::endl;
//			throw std::exception();
//		}
//
//		list.destroy();
//		list.sort();
//
//		list.destroy();
//		list.pushBack(1);
//		list.sort();
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	score++;
//
//	try
//	{
//		List<int> list = List<int>();
//		List<int> list2 = List<int>(list);
//
//		list.pushBack(1);
//		list.pushBack(2);
//		list.pushBack(3);
//		list.pushBack(4);
//		list.pushBack(5);
//
//		if (checkOrder(list2))
//		{
//			std::cout << "The list data is not copied in the copy constructor" << std::endl;
//			throw std::exception();
//		}
//
//		list2 = list;
//
//		if (!checkOrder(list2))
//		{
//			std::cout << "The list data is not copied in the copy constructor" << std::endl;
//			throw std::exception();
//		}
//
//		list.destroy();
//		if (!checkOrder(list2))
//		{
//			std::cout << "The list data is not copied in the copy constructor" << std::endl;
//			throw std::exception();
//		}
//	}
//	catch (...)
//	{
//		score--;
//	}
//
//	return score;
//}
//
//int main()
//{
//	std::cout << "Score was " << startTest() << "/7";
//	return 0;
//}