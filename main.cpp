#include <iostream>
#include "shapes.h"



using namespace std;

int main()
{

    double radius = 0;
    int length = 0;
    Square square;
    Circle circle;
    int ch;

    cout << "Press 1 or 2 on which shape's area you would like to calculate\n\n1.) Area of circle\n2.) Area of square" << endl;
    cout << "\nEnter your choice: " << endl;
    cin >> ch;

    switch(ch)
    {
        case 1:
        {
            cout << "\nEnter radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
            cout << "\nThe Area of the circle is "<< circle.getArea();
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter the length of the Square's side: ";
            cin >> length;
            square.setLength(length);
            cout << "\n The Area of the square is "<< square.getArea();
            break;
        }

        default: cout<<"\n Please enter a valid choice!";
            break;
    }

    return 0;
}