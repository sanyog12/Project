#include "Circle.h"
#include <iostream>
#define PI 3.14
using namespace std;



Circle::Circle(int radius){
	    this->radius = radius;
	}



void Circle:: display(){
		double area = ((float)PI*(radius*radius));
    cout<<"Area of circle is "<<area;
}
