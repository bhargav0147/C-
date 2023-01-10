#include<iostream>
using namespace std;
class Sum
{
	private :
		int a,b;
	
	friend void add();
	
};
void add()
{
	Sum s1;
	s1.a=10;
	s1.b=90;

	cout<<"Addition is := "<<s1.a+s1.b<<endl;	
	
}
main()
{
	add();
}