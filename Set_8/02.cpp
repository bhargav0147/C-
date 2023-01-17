	// create a class that contains four member functions,
	//with 0, 1, 2, and 3 int arguments, respectively.
	//Create a main( ) that makes an object of your class and calls each of the member functions.
	//Now modify the class so it has instead a single member function with all the arguments defaulted
#include<iostream>
using namespace std;
class A
{
	public:
		public:
		int a=10;
		void setter ()
		{
			cout<<a<<endl;	
		}
};
class B
{
	public:
		int b=20;
		void setter ()
		{
			cout<<b<<endl;
		}
};
class C
{
	public:
		int c=30;
		void setter ()
		{
			cout<<c<<endl;
		}
};
class D
{
	public:
		int d=40;
		void setter ()
		{
			cout<<d<<endl;
		}
};
class ALL
{
	public:
		void getter()
		{
			A a1;
			B b1;
			C c1;
			D d1;
			
			a1.setter();
			b1.setter();
			c1.setter();
			d1.setter();
		}
		
};
main()
{
	ALL a;
	
	a.getter();
}