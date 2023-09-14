#include"ArrayTree.h"
void Error(string s) { cerr << s; exit(-1); }
int max(int a, int b) { return(a > b) ? a : b; }

ArrayTree::ArrayTree()
{
	for (int pos = 1; pos < TREE_SIZE; pos++)
		data[pos] = NONE;
}
bool ArrayTree::IsNone(int pos)
{
	return pos <= 0 || pos >= TREE_SIZE || data[pos] == NONE;
}
bool ArrayTree::IsLeaf(int pos)
{
	if (IsNone(pos))return false;
	int left = pos * 2, right = pos * 2 + 1;
	return IsNone(left) && IsNone(right);
}
void ArrayTree::InsertPos(int pos, Data d)
{
	if (pos <= 0 || pos >= TREE_SIZE || pos != ROOT && IsNone(pos / 2))
		Error("Cannot insert");
	data[pos] = d;
}
Data ArrayTree::DeletePos(int pos)
{
	if (IsNone(pos) || !IsLeaf(pos))
		Error("Cannot delete");
	Data d = data[pos]; data[pos] = NONE;
	return d;
}
Data ArrayTree::PeekPos(int pos)
{
	if (IsNone(pos))Error("Cannot peek");
	return data[pos];
}
int ArrayTree::NumNode(int pos)
{
	if (IsNone(pos))return 0;
	int left = pos * 2, right = pos * 2 + 1;
	return 1 + NumNode(left) + NumNode(right);
}
int ArrayTree::Height(int pos)
{
	if (IsNone(pos))return 0;
	int left = pos * 2 , right = pos * 2 + 1;
	return 1 + max(Height(left), Height(right));
}
void ArrayTree::PrintTree()
{
	for (int pos = 1; pos < TREE_SIZE; pos++) {
		if (IsNone(pos))continue;
		int left = pos * 2, right = pos * 2 + 1;
		cout << "node " << pos << ": value =" << data[pos]
			<< ",# of children =" << !IsNone(left) + !IsNone(right)
			<< endl;
	}
}
void ArrayTree::PrintLevelOrder()
{
	int numNode = NumNode();
	for (int level = 1; numNode > 0; level++) {
		cout << "Level" << level << ": ";
		int pos, length = 1 << (level - 1);
		for (pos = length; pos < 2 * length; pos++) {
			if (IsNone(pos) == false) {
				cout << data[pos] << " "; numNode--;
			}
		}
		cout << endl;
	}

}