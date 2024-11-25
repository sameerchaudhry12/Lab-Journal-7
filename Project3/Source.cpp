#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = nullptr;
	}
};
class MyQueue {
public:
	Node* front;
	Node* rear;


	MyQueue() {
		front = nullptr;
		rear = nullptr;
	}


	void Enqueue(int val) {
		Node* newNode = new Node(val);

		if (rear == nullptr) {

			front = rear = newNode;
		}
		else {

			rear->next = newNode;
			rear = newNode;
		}
	}


	void Dequeue() {
		if (front == nullptr) {
			cout << "Queue is empty!" << endl;
			return;
		}


		Node* temp = front;


		front = front->next;


		if (front == nullptr) {
			rear = nullptr;
		}


		cout << "Deleted Node is: " << temp->data << endl;
		delete temp;
	}


	bool isEmpty() {
		return front == nullptr;
	}


	void getFront() {
		if (front != nullptr) {
			cout << "Front is: " << front->data << endl;
		}
		else {
			cout << "Queue is empty!" << endl;
		}
	}


	void Display() {
		if (front == nullptr) {
			cout << "Queue is empty!" << endl;
			return;
		}

		Node* temp = front;
		while (temp != nullptr) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout << "nullptr" << endl;
	}
};

int main() {
	MyQueue q1;
	q1.Enqueue(1);
	q1.Enqueue(2);
	q1.Enqueue(3);
	q1.Display();
	q1.getFront();
	q1.Dequeue();
	q1.Display();

}
