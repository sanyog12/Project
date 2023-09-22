#include "Ellipse.h"
#include <iostream>
#define PI 3.14
using namespace std;



	Ellipse::Ellipse(int length, int height){
	    this->length = length;
	    this->height = height;
	}
	
void Ellipse::display(){
    cout<<"Area of Ellipse is "<<((float)PI*length*height)<<endl;
}
