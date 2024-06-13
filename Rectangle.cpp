//
// Created by PC on 13.06.2024.
//
#include <iostream>
#include "Rectangle.h"
#include "math.h"

using namespace std;

int Rectangle::m_numberFigury = 0;

Rectangle:: Rectangle(){
    m_name = "???";
    s1 = 0;
    s2 = 0;
}
Rectangle::Rectangle(const std::string &name, double x, double y) {
    m_name = name;
    s1 = x;
    s2 = y;
    m_numberFigury++;
}
int Rectangle::numberFigury() {
    return m_numberFigury;
}

double Rectangle::area() const {
    double p;
    p = s1*s2;

    return p;
}

double Rectangle::perimeter() const {
    double Pe;
    Pe = 2*s1+2*s2;
    return  Pe;
}

void Rectangle::showSides() const {
    cout<<"First side of the rectangle = " << s1 << " Second side of the rectangle = " << s2 << endl;
}
Rectangle::~Rectangle() {
    m_numberFigury--;
}
void Rectangle::name() const {
    cout<<m_name<<endl;
}
const Rectangle& Rectangle:: bigger(const Rectangle& t) const {
    double d =area();
    double dp = t.area();
    if (d > dp){
        return *this;}
    return t;
}

void rectangle (double *x,double *y){
    cout << "Rectangle" << endl;
    cout << "First side of your rectangle =  ";
    cin >> * x;
    cout << endl;
    cout << "Second side of your rectangle =  ";
    cin >> * y;
    cout << endl;
}

void name(char *text){
    cout<<"Enter Name : "<< endl;
    cin>>text;
}
