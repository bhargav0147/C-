	//demonstrate example of copy constructor
#include<iostream>
using namespace std;
class Entry
{
	public :
			
	Entry(Entry &e1)
	{
		cout<<"WELCOME TO FULTTER WORLD";
	}
	Entry()
	{
		
	}
};
main()
{
	Entry e2;
	Entry e1(e2);
}