#include"Stack.h"
void Error(string s) { cerr << s; exit(-1); }

void Stack::Push(Data d)
{
	if (IsFull())Error("Stack is full");
	data[++top] = d;
}
Data Stack::Pop()
{
	if (IsEmpty())Error("Stack is empty");
	return data[top--];
}
Data Stack::Peek()
{
	if (IsEmpty())Error("Stack is empty");
	return data[top];
}
void Stack::PrintStack()
{
	cout << "Stack: ";
	for (int i = 0; i < top; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}
void Stack::Replace(Data d)
{
	if (IsEmpty())Error("Stack is empty");
	data[top] = d;
}
