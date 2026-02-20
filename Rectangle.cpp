#include "Rectangle.h"
#include "Drawable.h"
#include <iostream>
#include <cmath>
using namespace std;
Rectangle::Rectangle() {
	width = 0;
	hight = 0;
	Diagonal = 0;
}
Rectangle::Rectangle(double w, double h){
	double width = w;
	double hight = h;
	calculateDiagonal();
}
double Rectangle::getWigth() {
	return width;
}
double Rectangle::getHeight() {
	return hight;
}
double Rectangle::getDiagonal() {
	return Diagonal;
}
void Rectangle::setWigth(double w) {
	width = w;
	calculateDiagonal();
}
void Rectangle::setheight(double h) {
	hight = h;
	calculateDiagonal();
}

double Rectangle::area() {
	return width * hight;
}

void Rectangle::calculateDiagonal() {
	Diagonal = sqrt(width * width + hight * hight);
}

void Rectangle::draw() {
	cout << "Drawing Rectangle with width: " << width << ", height: " << hight << endl;
	for (int i = 0;i < hight; i++) {
		for (int j = 0;j < width; j++) {
			if (i == 0 || i == hight - 1 || j == 0 || j == width - 1) 
				cout << "*";
			else
			
				cout << " ";		
			
		}
		cout << endl;
	}

}

