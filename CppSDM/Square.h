#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
	int side;
	public:
		void display();
	Square(int );
};

#endif
