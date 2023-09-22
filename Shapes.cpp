#include<iostream>
#define PI 3.14
using namespace std;

using namespace std;

class Point{
	int x,y;
	public:
		Point()
		{
			x=y=0;
		}
		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
		}
		void display()
		{
			cout<<"X co-ordinate is"<<x<<endl;
			cout<<"Y co-ordinate is"<<y<<endl;
		}
};



class Shape
{
	int thickness;
	public:
	void setThickness(int thickness){
	    this->thickness = thickness;
	}
	int getThickness(){
	    return thickness;
	};
	virtual void display()=0;
	
};



class Line: public Shape
{
	int endPoint;
	int startPoint;
	public:
	Line(){
	    startPoint = 0;
	    endPoint = 0;
	}
	Line(int startPoint, int endPoint){
	    this->startPoint = startPoint;
	    this->endPoint = endPoint;
	}
	
	void display();
	
};
void Line::display(){
	int length = endPoint - startPoint;
    cout<<"Length is "<<length<<endl;
}



class Rectangle: public Shape
{
	int length;
	int breadth;
	public:
	Rectangle(){
	    length = 0;
	    breadth = 0;
	}
	Rectangle(int length, int breadth){
	    this->length = length;
	    this-> breadth = breadth;
	}

	void display();

};
void Rectangle:: display(){
		int area = length * breadth;
    cout<<"the area of Rectangle is "<<area<<endl;
}



class Circle: public Shape{

	int radius;
	public:
	Circle(){
	    radius = 0;
	}
	Circle(int radius){
	    this->radius = radius;
	}

	void display();
};
void Circle:: display(){
		double area = ((float)PI*(radius*radius));
    cout<<"Area of circle is "<<area;
}


class Square: public Shape{
	int side;
	public:
	Square(){
	    side = 0;
	}
	Square(int side){
	    this->side = side;
	}
	
	void display();
};
void Square:: display(){
    cout<<"Area of Square is "<<side*side<<endl;
}

class Ellipse: public Shape{


	int length;
	int height;
	public:
	Ellipse(){
	    length = height = 0;
	}
	Ellipse(int length, int height){
	    this->length = length;
	    this->height = height;
	}
	void display();
};
void Ellipse::display(){
    cout<<"Area of Ellipse is "<<((float)PI*length*height)<<endl;
}

int main(){
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
		
		    ptr = new Line(0,6);
		    ptr ->display();
		  
			break;
		case 2:
		    ptr = new Rectangle(5,5);
		     ptr ->display();
		    
			break;
		case 3:
		   ptr = new Square(5);
		    ptr ->display();
		   
			break;
		case 4:
		  ptr = new  Circle(4);
		   ptr ->display();
		   
			break;
		case 5:
		ptr = new Ellipse(3,2);
		 ptr ->display();
	
		break;
		default:
			cout<<"enter a valid option"<<endl;
	}
}
