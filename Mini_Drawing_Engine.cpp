#include <iostream>
#include "Drawable.h"
#include "Circle.h"
#include "Rectangle.h"
#include <vector>
using namespace std;

int main()
{
    

    //Drawable* ptr = new Circle(5);
    //ptr->draw();
    //
    //cout << "Area: " << ptr->area() << endl;
    //
 

    vector<Drawable*> shapes;

        shapes.push_back(new Circle(5));
        shapes.push_back(new Rectangle(10, 5));

        double totalArea = 0;
        for (Drawable* shape : shapes) {
            shape->draw();
            double a = shape->area();
            cout << "Area: " << a << endl;
            totalArea += a;
        }

        cout << "Total Area: " << totalArea << endl << endl;

        // Free memory
        for (Drawable* shape : shapes) {
            delete shape;
        }

    return 0;
}
