	//which illustrate the use of Method Overriding concept
#include<iostream>
using namespace std;
class Jensi
{
	public :
		void set(int a)
		{
			cout<<a<<endl;
		}
};
class Aksh
{
	public :
		void set(int a)
		{
			cout<<a<<endl;
		}
};
main()
{
	Jensi j1;
	Aksh a1;
	
	j1.set(10);
	a1.set(20);
}