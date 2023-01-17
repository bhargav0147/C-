	//demonstrate usage of Virtual Function
#include<iostream>
using namespace std;
class Math
{
	public :
		virtual void add();
};
class Math1 : public Math
{
	public :
		void add()
		{
			cout<<"Hello World Good Mornig"<<endl;
		}
};
main()
{
	Math *m;
	Math1 c1;
	
	m=&c1;
	m->add();
}