#pragma once
#include "Node.h"


template <typename T>
class Iterator
{
public:
	/// <summary>
	/// The constructor which sets the current node to be null.
	/// </summary>
	Iterator();

	/// <summary>
	/// The constructor that sets the current node equal to the one input
	/// </summary>
	/// <param name="node"></param>
	Iterator(Node<T>* node);

	/// <summary>
	/// Overloads the ++ operator, setting the current node to be equal to the current node's next
	/// </summary>
	/// <returns></returns>
	Iterator<T> operator++();

	/// <summary>
	/// Overloads the -- operator, setting the current node to be equal to the current node's previous
	/// </summary>
	/// <returns></returns>
	Iterator<T> operator--();

	/// <summary>
	/// Checks to see if the iterator's current is equal to to the iter's current 
	/// </summary>
	/// <param name="iter"></param>
	/// <returns></returns>
	const bool operator==(const Iterator<T>& iter);

	/// <summary>
	/// Checks to see if the iterator's current is not equal to to the iter's current 
	/// </summary>
	/// <param name="iter"></param>
	/// <returns></returns>
	const bool operator!=(const Iterator<T>& iter);

	/// <summary>
	/// Overloads the dereference operator, which returns the value in the node the integer is pointing at
	/// </summary>
	/// <returns></returns>
	T operator *();

private:
	Node<T>* m_current;
};

template <typename T>
Iterator<T>::Iterator(Node<T>* node)
{
	m_current = nullptr;
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
	m_current = node;
}
template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	//if the current is null
	if (m_current == nullptr)
		//return the null node
		return Iterator<T>(m_current);
	else
		return Iterator<T>(m_current = m_current->next);
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	//if the currents previous is null
	if (m_current->previous == nullptr)
		//return the current node
		return Iterator<T>(m_current);
	else
		return Iterator<T>(m_current = m_current->previous);
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	//if either this iterator current is null xor the iters current is null return false
	if ((bool)(m_current == nullptr) ^ (bool)(iter.m_current == nullptr))
		return false;
	//if both of the current are null
	if (m_current == nullptr && iter.m_current == nullptr)
		return true;
	//return if all components are equal
	return m_current->data == iter.m_current->data &&
		m_current->next == iter.m_current->next &&
		m_current->previous == iter.m_current->previous;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	if ((bool)(m_current == nullptr) ^ (bool)(iter.m_current == nullptr))
		return true;
	if (m_current == nullptr && iter.m_current == nullptr)
		return false;
	return !(m_current->data == iter.m_current->data &&
		m_current->next == iter.m_current->next &&
		m_current->previous == iter.m_current->previous);
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return m_current->data;
}