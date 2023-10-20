#pragma once

#include <iostream>

struct N
{
	char value;
	N* l;
	N* r;
};

template <class T>
struct L
{
	T value;
	L<T>* next;
};

template <class T>
struct Stack
{
	L<T>* top;

	Stack();

	void Push(T value);
	void Push(T* value);
	void Pop();
	bool IsEmpty();
	void Clear();
	void Print();
};

template <class T>
struct Queue
{
	L<T>* front;
	L<T>* rear;

	Queue();

	void Push(T value);
	void Push(T* value);
	void Pop();
	bool IsEmpty();
	void Clear();
	void Print();
};

struct BT
{
	N* root;

	BT();
	BT(N* sub);
	BT(char value);

	static N* Initialise(int position);
	void PreorderTraverse();
	void InorderTraverse();
	void PostorderTraverse();
	void LevelOrderTraverse();
	void RPreorderTraverse();
	void RInorderTraverse();
	void RPostorderTraverse();
	int Height();
	int Width();
	bool IsComplete();
	void HeightDetector(int position, int worstLen, int* positionArr);
	void HeightDetector(int position, int& deepest);
	void WidthDetector(int position, int height, int* temp);
};