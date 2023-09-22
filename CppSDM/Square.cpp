#include "Square.h"
#include <iostream>
using namespace std;



Square::Square(int side){
	    this->side = side;
	}
	
	
	
void Square:: display(){
    cout<<"Area of Square is "<<side*side<<endl;
}

