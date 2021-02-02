#include<iostream>
#include"circle.h"
using namespace std;

Circle::Circle(){
    radius=1.0;
}
Circle::Circle(double radius__){
    radius=radius__;
}
double Circle::getArea(){
    return(3.14*radius*radius);
}
