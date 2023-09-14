#include<iostream>
#include<cstdlib>
using namespace std;

class Student {
public:
	int id, age, grade;
	string name;
	Student(int i = 0, string n = " ", int a = 0, int g = 0) {
		id = i; name = n; age = a; grade = g;
	}
	void Print() {
		if (id <= 0)return;
		cout << "ID = " << id << ";Name =" << name;
		if (grade <= 0)cout << endl;
		else cout << ";Grade = " << grade << endl;
	}
		int Key() { return id; }
};