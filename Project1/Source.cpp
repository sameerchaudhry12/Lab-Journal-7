#include<iostream>
using namespace std;
class MyQueue
{
	int* arr;
	int size;
	int front;
	int rear;

public:
	MyQueue()
	{
		size = 5;
		arr = new int[size];
		front = 0;
		rear = 0;
	}

	void Enqueue(int data)
	{
		if (rear == size)
		{
			cout << "Queue is Full";
		}
		else
		{
			arr[rear] = data;
			rear++;
		}
	}
	int Dequeue()
	{
		if (front == rear)
		{
			return -1;
		}
		else
		{
			arr[front] = -1;
			front++;
			if (front == rear)
			{
				front = 0;
				rear = 0;
			}
		}

	}
	bool isEmpty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isFull()
	{
		if (rear == size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int getFront()
	{
		if (front == rear)
		{
			return -1;
		}
		else
		{
			return arr[front];
		}
	}
};
int main()
{
	MyQueue q1;
	q1.Enqueue(1);
	q1.Enqueue(2);
	q1.Enqueue(3);
	q1.isEmpty();

}
