#include "Rectangle.h"
#include <iostream>
using namespace std;


	

	Rectangle::Rectangle(int length, int breadth){
	    this->length = length;
	    this-> breadth = breadth;
	}

	
void Rectangle:: display(){
		int area = length * breadth;
    cout<<"the area of Rectangle is "<<area<<endl;
}
