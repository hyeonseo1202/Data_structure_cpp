#include<iostream>
#include<cstdlib>
using namespace std;
typedef int Data;
const int LIST_SIZE = 10000;
const int SEARCH_FAILED = -1000000;
void Error(string s) { cerr << s; exit(-1); }
class SortedArrayList {
protected:
	Data data[LIST_SIZE];
	int length=0;
	virtual int Key(Data d) { return d; }
public:
	bool IsEmpty() { return length == 0; }
	bool IsFull() { return length == LIST_SIZE; }
	int Length() { return length; }
	void CheckPos(int pos, int maxPos)
	{
		if (pos<0 || pos>maxPos) {
			Error("Illegal position");
		}
	}
	void InsertPos(int pos, Data d)
	{
		CheckPos(pos, length);
		if (IsFull())Error("List is full");
		for (int i = length; i > pos; i--) {
			data[i] = data[i - 1];
		}
		data[pos] = d; length++;
	}
	Data DeletePos(int pos)
	{
		CheckPos(pos, length - 1);
		Data d = data[pos];
		for (int i = pos; i < length; i++) {
			data[i] = data[i + 1];
		}
		length--; return d;
	}
	void PrintList() 
	{
		for (int i = 0; i < length; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
	Data Search(int key) {
		for (int i = 0; i < length; i++) {
			if (Key(data[i]) == key)
				return data[i];
		}
		cout << key << "is not found" << endl;
		return SEARCH_FAILED;
	}

};