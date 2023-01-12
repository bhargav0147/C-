	//WAP that defines a shape class with a constructor that gives value to width and height.
	//The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
	//In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.
#include<iostream>
using namespace std;
class Shape
{
	public:
		int a,b;
	Shape()
	{
		cout<<"Enter Base & Hight For Find Area"<<endl;
		cin>>a>>b;
	}
};
class Triangle : public Shape
{
	public :
		
	void area()
	{
		cout<<"=================================="<<endl;
		cout<<"Triangle Area Is := "<<a*b/2<<endl;
	}
};
class Rectangle : public Shape
{
	public :
	void Area1()
	{
		cout<<"=================================="<<endl;
		cout<<"Rectangle Area Is := "<<a*b<<endl;
	}
};
main()
{
	Triangle t1;
	Rectangle r1;
	
	t1.area();
	r1.Area1();
}

