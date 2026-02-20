#include "Circle.h"
#include "Drawable.h"
#include <iostream>
using namespace std;


double radius; //by x نق2

Circle::Circle(double r) : radius(r) {}



double Circle::area()  {
	return 3.14 * radius * radius;
}
void Circle::draw() {
	Drawable::draw();
	cout << "Drawing Circle" << endl;
}//call Drawable::draw(); to print "Drawing Circle"

