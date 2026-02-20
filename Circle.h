#pragma once
#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Drawable.h"

class Circle : public Drawable
{
public:

	double radius; //by x نق2
	Circle(double r);

	double area() override;
	
	void draw() override; //call Drawable::draw(); to print "Drawing Circle"

};

#endif // !CIRCLE_H_



