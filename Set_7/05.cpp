	//demonstrate example of hierarchical inheritance to get square and cube of a number.
#include<iostream>
using namespace std;
class Number
{
	public:
		int a;
		Number()
		{
			cout<<"Enter The Value"<<endl;cin>>a;
		}
		
};
class Square : public Number
{
	public:
		void getter()
		{
			cout<<endl<<a<<"  Square IS := "<<a*a<<endl;
		}
};
class Cube : public Number
{
	public:
		void getter()
		{
			cout<<endl<<a<<"  Square IS := "<<a*a*a<<endl;
		}
};
main()
{
	Square s1;
	Cube c1;
	
	s1.getter();
	c1.getter();
}