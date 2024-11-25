#include <iostream>
using namespace std;

class CircularQueue {
private:
	int* arr;
	int front, rear, count;

public:

	CircularQueue(int size) {
		count = size;
		arr = new int[count];
		front = -1;
		rear = -1;
	}





	void enqueue(int value) {
		if (isFull()) {
			cout << "Queue is full" << value << endl;
		}
		else {
			if (front == -1) {
				front = 0;
			}
			rear = (rear + 1) % count;
			arr[rear] = value;
			cout << "Enqueued: " << value << endl;
		}
	}

	void dequeue() {
		if (isEmpty()) {
			cout << "Queue is empty" << endl;
		}
		else {
			cout << "Dequeued: " << arr[front] << endl;
			if (front == rear) {
				front = rear = -1;
			}
			else {
				front = (front + 1) % count;
			}
		}
	}



	bool isEmpty() {
		return (front == -1);
	}


	bool isFull() {
		return ((rear + 1) % count == front);
	}
	int getFront() {
		if (isEmpty()) {
			cout << "Queue is empty." << endl;
			return -1;
		}
		return arr[front];
	}

};

int main() {
	CircularQueue q(5);

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
	q.getFront();

	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();

	return 0;
}
