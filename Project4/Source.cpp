#include<iostream>
using namespace std;
class MyQueue
{
private:
	int size;
	int* arr;
	int rear;
public:
	MyQueue(int s)
	{
		size = s;
		rear = 0;
		arr = new int[size];
	}
	void Enqueue(int element)
	{
		if (rear == size)
		{
			cout << "Queue is Full";
		}
		else
		{
			arr[rear] = element;
			rear++;
		}
	}
	void Dequeue()
	{
		if (size == 0)
		{
			cout << "Queue is empty";
		}
		else
		{
			int minin = 0;
			for (int i = 0; i < size; i++)
			{
				if (arr[minin] > arr[i])
				{
					arr[minin] = i;
				}
			}
			int minval = arr[minin];
			for (int i = 0; i < size - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			size--;
		}
	}
	void Display()
	{
		if (size == 0)
		{
			cout << "Queue is Empty";
		}
		else
		{
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}
};
int main()
{
	MyQueue q1(5);
	q1.Enqueue(1);
	q1.Enqueue(2);
	q1.Enqueue(3);
	q1.Enqueue(4);
	q1.Enqueue(5);
	q1.Display();
	q1.Dequeue();
	q1.Display();

}
