	//Set values of data members using default, parameterized and copy constructor
#include<iostream>
using namespace std;
class Entry
{
	public :
			
	Entry(int a, int b)
	{
		cout<<"Adition Is := "<<a+b<<endl<<endl;
	}
	Entry(Entry &e2)
	{
		cout<<"WELCOME TO FULTTER WORLD"<<endl<<endl;
	}
	Entry()
	{
		
	}
};
main()
{
	Entry e3;
	Entry e2(e3);
	Entry e1(10,20);
}