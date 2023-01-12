	//WAP with a mother class and an inherited daugther class.
	//Both of them should have a method void display ()that prints a message (different for mother and daugther).
	//In the main define a daughter and call the display() method on it
	
#include<iostream>
using namespace std;
class Mother
{
	public:
		void display()
		{
			cout<<"\tHello Daugther"<<endl<<endl;
		}
};
class Daugther : public Mother
{
	public:
		void display()
		{
			cout<<"\tHello Mummyyyy"<<endl<<endl;	
		}
};
main()
{
	Daugther d1;
	
	d1.Mother::display();
	d1.display();
}
