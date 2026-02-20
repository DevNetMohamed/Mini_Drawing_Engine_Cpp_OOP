#pragma once
#include "Drawable.h"
class Rectangle : public Drawable
{
private:
	double width;
	double hight;
	double Diagonal;
	void calculateDiagonal();
public:
	Rectangle();
	Rectangle(double w, double h);
	double getWigth();
	double getHeight();
	double getDiagonal();
	void setWigth(double w);
	void setheight(double h);
	double area() override;
	void draw() override;
};

