#pragma once
#ifndef DRAWABLE_H_
#define DRAWABLE_H_

class Drawable
{
public:

	virtual ~Drawable() = 0;
	virtual void draw() = 0;
	virtual double area() = 0;


};

#endif // !DRAWABLE_H_



