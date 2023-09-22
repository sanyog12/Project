#include "Line.h"
#include <iostream>
using namespace std;



	Line::Line(int startPoint, int endPoint){
	    this->startPoint = startPoint;
	    this->endPoint = endPoint;
	}
	

	

void Line::display(){
	int length = endPoint - startPoint;
    cout<<"Length is "<<length<<endl;
}
