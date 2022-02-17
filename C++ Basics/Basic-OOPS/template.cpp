#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T>
class rect
{
private:
    T length;
    T breadth;

public:
    rect(T a ,T b);
    T area();
    T perimeter();
};

template <class T>
rect <T> :: rect (T a, T b){
    this->length = a;
    this->breadth = b;
}

template <class T>
T rect <T> :: area(){
    return length*breadth;
}

template <class T>
T rect <T>:: perimeter (){
    return 2*(length + breadth);
}

int main()
{
    rect <float> r(10.4555413,5.989083);

    cout<<"Area : "<<r.area()<<endl;
    cout<<"Perimeter : "<<r.perimeter()<<endl;


    return 0;
}