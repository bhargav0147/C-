#include<iostream>
using namespace std;
class Det
{
	private :
		
		char name[100];
		int age;
		
	public :
		void setdata ()
		{
			cout<<"Name"<<endl;
			cin>>name;
			cout<<"Age"<<endl;
			cin>>age;
		}
		void getdata()
		{
			cout<<"Name := "<<name<<endl<<"Age := "<<age<<endl;
		}
};
main()
{
	Det m1;
	m1.setdata();
	
	m1.getdata();
	
}
