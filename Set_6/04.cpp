	//demonstrate example of destructors
#include<iostream>
using namespace std;
class Entry
{
	public :
		
	Entry()
	{
		cout<<"WELCOME TO FULTTER WORLD"<<endl<<endl;
	}
	~Entry()
	{
		cout<<"BYE BYE FULTTER "<<endl;
	}
	
};
main()
{
	Entry e1;
}