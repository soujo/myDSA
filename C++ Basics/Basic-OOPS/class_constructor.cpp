#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class rect
{
private:
    int length;
    int breadth;

public:
    rect() { length = breadth = 1; }      // Default constructor
    rect(int l, int b);                   // Parameterised constructor
    int area();                           // Facilatators
    int perimeter();                      // Facilatators
    int getLength() { return length; }    // Accessor
    void setLength(int l) { length = l; } // Mutator
    ~rect();                              // Destructor
};

rect::rect(int l, int b)
{
    length = l;
    breadth = b;
}

int rect::area()
{
    return length * breadth;
}

int rect::perimeter()
{
    return 2 * (length + breadth);
}

rect::~rect()
{
}

int main()
{
    rect r; // default value will be taken from the constructor
    // rect r(10,5);
    cout << r.getLength() << endl;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    r.setLength(1);
    cout << r.getLength() << endl;
    return 0;
}