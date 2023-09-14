#include <iostream>
#include <cstdlib>
using namespace std;
void Error(string s) { cerr << s; exit(-1); }
const int STACK_SIZE = 100;
template <typename Data1, typename Data2>


class StackTemplate {
    Data1 data1[STACK_SIZE];
    Data2 data2[STACK_SIZE];
    int top1;
    int top2;
public:
    StackTemplate() {
        top1 = -1, top2 = -1;
    }
    void Push(Data1 d, Data2 f) {
        if (IsFull()) Error("Stack is full");
        data1[++top1] = d;
        data2[++top2] = f;

    }
    void Pop() {
        if (IsEmpty()) Error("Stack is empty");
        cout << "ID :" << data1[top1--];
        cout << "; name :" << data2[top2--] << endl;
    }
    void Peek() {
        if (IsEmpty()) Error("Stack is full");
        cout << "ID_Peek : " << data1[top1];
        cout << "; ID_Peek : " << data2[top2];

    };
    bool IsEmpty() { return top1 == -1 || top2 == -1; }
    bool IsFull() { return top1 == STACK_SIZE - 1 || top2 == STACK_SIZE - 1; }
    void PrintStack() {
        for (int i = 0; i <= top1; i++) {
            cout << data1[i] << endl;
        }
        for (int i = 0; i <= top2; i++) {
            cout << data2[i] << endl;
        }
        cout << endl;
    }
    int Length() { return top1 + 1; }
};