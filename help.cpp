#include <iostream>
#include<cstdlib>
using namespace std;
template <typename T>

class Polygon {
protected:
    T width, height;
public:
    void Set(T a, T b) { width = a; height = b; }
    virtual T Area() = 0;
};


class Rectangle : public Polygon {
public:
    T Area() { return width * height; }
};


class Triangle : public Polygon {
public:
    T Area() { return width * height / 2; }
};


int main()
{
    Rectangle <int> r1;
    Triangle <int> r2;

    r1.Set(5, 3); r2.Set(7, 4);

    cout << "Area of Rectangle = " r1.Area() << "Area of Triangle = " << r2.Area();
    return 0;
}