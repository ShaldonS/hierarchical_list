#pragma once

template<typename T>
class Node
{
public:
	Node() {};
	~Node() {};
	Node* next;
	T value;
};

template<typename T>
class Stack
{
public:
	Stack()
	{
		first = nullptr;
	}

	~Stack()
	{
		if (first == nullptr)
		{
			throw - 1;
		}
		else
		{
			while (first != nullptr)
			{
				delete first;
				first = first->next;
			}
		}
		first = nullptr;
	}

	void push(T val)
	{
		Node<T>*ptr = new Node<T>;
		if (ptr != nullptr)
		{
			ptr->value = val;
			ptr->next = first;
			first = ptr;
		}
	}
	void pop()
	{

	}
private:
	Node<T>* first;
};

template<typename T>
class Memory
{
private:
	static const int MAX_SIZE = 50;
	Node<T> arr[MAX_SIZE];
	Stack<int> memory;
public:
	Memory() {};
	~Memory() {};
	Node<T>* getNode()
	{

	}
	void freeNode()
	{

	}
};

