#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Ellipse.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//write cin operator
//write cin operator
	cout<<" 0 for exit"<<endl;
	cout<<" 1 for length of Line"<<endl;
	cout<<" 2 for area of Rectangle"<<endl;
	cout<<" 3 for area of Square"<<endl;
	cout<<" 4 for area of Circle"<<endl;
	cout<<" 5 for area of Ellipse"<<endl;
	int i;
	cin>>i;
	Shape * ptr;

	
	switch(i){
	    case 0:
	        break;
		case 1:
			Line l(0,6);
			l.display();
//		    ptr = new Line(0,6);
//		    ptr ->display();
		  
//			break;
//		case 2:
//		    ptr = new Rectangle(5,5);
//		     ptr ->display();
//		    
//			break;
//		case 3:
//		   ptr = new Square(5);
//		    ptr ->display();
//		   
//			break;
//		case 4:
//		  ptr = new  Circle(4);
//		   ptr ->display();
//		   
//			break;
//		case 5:
//		ptr = new Ellipse(3,2);
//		 ptr ->display();
//	
//		break;
//		default:
//			cout<<"enter a valid option"<<endl;
	}
	return 0;
}
