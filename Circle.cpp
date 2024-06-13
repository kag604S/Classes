//
// Created by PC on 13.06.2024.
//
#include <iostream>
#include "Circle.h"
#include "math.h"

using namespace std;

int Circle::m_numberFigury=0;




Circle::Circle() {
    m_name = "???";
    r = 0;
}
Circle::Circle(const std::string &name, double x) {
    m_name = name;
    r = x;
    m_numberFigury++;
}
Circle::~Circle() {
    m_numberFigury--;
}
int Circle::numberFigury() {
    return m_numberFigury;
}
void Circle::showCircle() const {
    cout<<"radius of the circle = "<< r << endl;
}

double Circle::perimeter() const {
    double l;
    l = 2*3.14*r;
    return l;
}

double Circle::area() const {
    double p;
    p = 3.14*r*r;
    return p;
}
void Circle::name() const {
    cout<<m_name<<endl;
}
const Circle& Circle:: bigger(const Circle& t) const {
    double d =area();
    double dp = t.area();
    if (d > dp){
        return *this;}
    return t;
}


void circle (double *x){
    cout << "Circle" << endl;
    cout<< "Radius of your circle = ";
    cin >> * x;
    cout << endl;
}


