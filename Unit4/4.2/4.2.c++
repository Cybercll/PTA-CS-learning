#include <iostream>
#include "Circle.h"
// #include "Circle.c++"
using namespace std;

int main ()
{
    Circle circle1;
    Circle circle2{5.5};
    cout<<circle1.getArea()<<endl<<circle2.getArea();
    cin.get();
    return 0;
}