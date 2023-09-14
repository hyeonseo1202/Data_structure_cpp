#include<iostream>
#include<cstdlib>
using namespace std;
typedef int Data;
const int LIST_SIZE = 10000;
const int SEARCH_FAILED = -1000000;

class ArrayList {
protected:
	Data data[LIST_SIZE];
	int length;
	virtual int Key(Data d) { return d; }
public: 
	ArrayList() { length = 0; }
	void InsertPos(int pos, Data d);
	Data DeletePos(int pos);
	Data PeekPos(int pos);
	Data Search(int Key);
	void DeleteAll(int Key);
	void PrintList();
	bool IsEmpty() { return length == 0; }
	bool IsFull() { return length == LIST_SIZE; }
	int Length() { return length; }
};
