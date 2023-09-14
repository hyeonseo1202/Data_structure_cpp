#include<iostream>
#include<cstdlib>
using namespace std;
void Error(string s) { cerr << s; exit(-1); }
const int QUEUE_SIZE = 5;
template<typename Data>
class QueueTemplate {
protected:
	Data data[QUEUE_SIZE];
	int front, rear, length;
public:
	QueueTemplate() {
		front = 0; rear = -1; length = 0;
	}
	Data Peek() {
		if (IsEmpty())Error("Queue is Empty");
		return Data[front];
	}
	Data Delete() {
		if (IsEmpty())Error("Ququq is Empty");
		Data out = data[front];
		front = (front + 1) % QUEUE_SIZE;
		length--; return out;
	}
	void Insert(Data d) {
		if (IsFull())Error("Queue is full");
		rear = (rear + 1) % QUEUE_SIZE;
		data[rear] = d; length++;
	}
	bool IsEmpty() { return length == 0; }
	bool IsFull() { return length == QUEUE_SIZE; }
};