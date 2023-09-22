#ifndef LINE_H
#define LINE_H

#include "Shape.h"

class Line : public Shape
{
	int endPoint;
	int startPoint;
	public:
		Line(int , int );
		void display();
	
};

#endif
