	//demonstrate example of parameterized constructor
#include<iostream>
using namespace std;
class Entry
{
	public :
		
	Entry(int a, int b)
	{
		cout<<"Addition Is := "<<a+b;
	}
};
main()
{
	Entry e1(10,20);
}