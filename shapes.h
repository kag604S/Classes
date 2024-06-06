//
// Created by PC on 06.06.2024.
//

#ifndef CLASSCIRCLE_SHAPES_H
#define CLASSCIRCLE_SHAPES_H


using namespace std;

class Square
{
private:
    int length, area;

public:
    Square(int length = 0);
    int getLength()const;
    void setLength(int length);
    int getArea()const;
    int getPerimeter()const;
};

class Circle
{
private:
    double radius, area;

public:
    Circle(double radius = 0);

    double getRadius()const;
    void setRadius(double radius);
    double getArea()const;
    double getPerimeter()const;
};

#endif //CLASSCIRCLE_SHAPES_H
