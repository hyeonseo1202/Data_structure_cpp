#include"ArrayList.h"
void Error(string s) { cerr << s; exit(-1); }
void CheckPos(int pos, int maxPos)
{
	if (pos<0 || pos>maxPos) {
		Error("IIIegal position");
	}
}
void ArrayList::InsertPos(int pos, Data d)
{
	CheckPos(pos, length);
	if (IsFull())Error("List is full");
	for (int i = length; i > pos; i--) {
		data[i] = data[i - 1];
	}
	data[pos] = d; length++;
}
Data ArrayList::DeletePos(int pos)
{
	CheckPos(pos, length - 1);
	Data d = data[pos];
	for (int i = pos; i < length; i++) {
		data[i] = data[i + 1];
	}
	length--; return d;
}
void ArrayList::PrintList()
{
	for (int i = 0; i < length; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}
void ArrayList::DeleteAll(int Key)
{
	for (int i = 0; i < length; i++) {
		if (data[i] == Key) {
			for (int j = i;j < length; j++) {
				data[j] = data[j + 1];
			}
			length--;
			i--;
		}
		
	}
}