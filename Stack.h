/*
* Lcanny1990
* Stack.h
*/

#ifndef STACK_H
#define STACK_H

#include "DLL.h"

template <typename T>
class Stack
{
private:
	DLL<T> objects;

public:
	Stack();
	~Stack();

	void clear();
	bool is_empty();
	void push(T);
	void pop();
	T top();

};

template <typename T>
Stack<T>::Stack()
{

}


template <typename T>
Stack<T>::~Stack()
{

	objects.clear();

}

template <typename T>
void Stack<T>::clear()
{

	objects.clear();

}

template <typename T>
bool Stack<T>::is_empty()
{
	bool empty = 0;
	if (objects.size() == 0)
	{
		empty = 1;
	}
	return empty;
}

template <typename T>
void Stack<T>::push(T insertObject)
{
	objects.insert_front(insertObject);
}

template <typename T>
void Stack<T>::pop()
{
	objects.erase_front();
}

template <typename T>
T Stack<T>::top()
{
	return objects.at(0);
}

#endif
