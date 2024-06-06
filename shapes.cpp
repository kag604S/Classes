//
// Created by PC on 06.06.2024.
//


#include <cmath>
#include <iostream>
#include "shapes.h"

using namespace std;

Circle::Circle(double r)
{
    radius = r;
}
double Circle::getRadius()const
{
    return radius;
}
void Circle::setRadius (double r)
{
    radius = r;
}
double Circle::getArea() const
{
    return radius * radius * 3.1415926;
}


Square::Square(int len)
{
    length = len;
}
int Square::getLength()const
{
    return length;
}
void Square::setLength(int len)
{
    length = len;
}
int Square::getArea() const
{
    return length * length;
}