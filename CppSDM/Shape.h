#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	int thickness;
	public:
	virtual void display()=0;
	void setThickness(int);
	int getThickness();
	
};

#endif
