#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
typedef string Data;
const string NONE = ".";
const int ROOT = 1;
const int TREE_HEIGHT = 8;
const int TREE_SIZE = 1 << TREE_HEIGHT;

class ArrayTree {
	Data data[TREE_SIZE];
	int NumNode(int pos);
	int NumLeaf(int pos);
	int Height(int pos);
public:
	ArrayTree();
	void InsertPos(int pos, Data d);
	Data DeletePos(int pos);
	Data PeekPos(int pos);
	int NumNode() { return NumNode(ROOT); }
	int NumLeaf() { return Height(ROOT);}
	int Height() { return Height(ROOT); }
	void PrintTree();
	void PrintLevelOrder();
	bool IsNone(int pos);
	bool IsLeaf(int pos);
};
