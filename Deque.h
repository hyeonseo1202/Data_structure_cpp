#include<iostream>
#include<cstdlib>
using namespace std;
void Error(string s) { cerr << s; exit(-1); }
const int DEQUE_SIZE = 5;
template<typename Data>
class Deque {
	Data data[DEQUE_SIZE];
	int front, rear, length;
public:
	Deque() { front=0, length=0, rear = DEQUE_SIZE - 1; }
	void InsertFront(Data d) {
		if (IsFull())Error("Deque is full");
		front = (front - 1 + DEQUE_SIZE) % DEQUE_SIZE;
		data[front] = d;
		length++;
	}
	void InsertRear(Data d) {
		if (IsFull())Error("Deque is full");	
		rear = (rear + 1) % DEQUE_SIZE;
		data[rear] = d;
		length++;
	}
	Data Deletefront() {
		if (IsEmpty())Error("Deque is empty");
		Data out = data[front];
		front = (front + 1) % DEQUE_SIZE;
		length--;
		return out;
	}
	Data  DeleteRear() {
		if (IsEmpty())Error("Duque is empty");		
		Data out = data[rear];
		rear = (rear - 1 + DEQUE_SIZE) % DEQUE_SIZE;
		length--;
		return out;
	}
	bool IsEmpty() { return length == 0; }
	bool IsFull() { return length == DEQUE_SIZE; }

};