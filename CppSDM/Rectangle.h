#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
	int length;
	int breadth;
	public:
		Rectangle(int, int);
		void display();	
};

#endif
