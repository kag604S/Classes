//
// Created by PC on 13.06.2024.
//
#include <iostream>
#include "Triangle.h"
#include "math.h"
using namespace std;


int Triangle::m_numberFigury = 0;

Triangle ::Triangle() {
    m_name = "???";
    s1 = 0;
    s2 = 0;
}

Triangle::Triangle(const std::string &name, double x, double y) {
    m_name = name;
    s1 = x;
    s2 = y;
    m_numberFigury++;
}
Triangle::~Triangle(){
    m_numberFigury--;
}

void Triangle::showSides() const {
    double s3;
    s3 = sqrt((s1 * s1)+(s2*s2));
    cout << "First adjoining = " << s1 << " Second adjoining = " << s2 << " hypotenuse = "<< s3 << endl;
}
double Triangle::area() const {
    double p;
    p = (s1*s2)/2;
    return p;

}
double Triangle::perimeter() const {
    double s3;
    double Pe;
    s3 = sqrt((s1 * s1)+(s2*s2));
    Pe = s1 + s2 + s3;
    return Pe;

}
int Triangle::numberFigury() {
    return m_numberFigury;
}
void Triangle::name() const {
    cout<<m_name<<endl;

}
const Triangle& Triangle:: bigger(const Triangle& t) const {
    double d = area();
    double dp = t.area();
    if (d > dp){
        return *this;}
    return t;
}

void triangle (double *x,double *y ){
    cout << "Triangle" << endl;
    cout << "First adjoining of your triangle =  ";
    cin >> * x;
    cout << endl;
    cout << "Second adjoining of your triangle =  ";
    cin >> * y;
    cout << endl;
}


