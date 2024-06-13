//
// Created by PC on 13.06.2024.
//

#ifndef CLASSES2_RECTANGLE_H
#define CLASSES2_RECTANGLE_H

#include <string>

class Rectangle {
private:
    static int m_numberFigury;
    std::string m_name;
    double s1;
    double s2;
public:
    static int numberFigury();
    Rectangle();
    Rectangle(const std::string& name, double x = 0, double y = 0);
    ~Rectangle();
    void showSides() const;
    double area() const;
    double perimeter() const;
    void name() const;
    const Rectangle& bigger(const Rectangle& t) const;
};

void rectangle (double *x,double *y);

#endif //CLASSES2_RECTANGLE_H
