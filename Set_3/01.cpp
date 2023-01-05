	//create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
#include<iostream>
using namespace std;
class Dis
{	public:
	
	int f,i;
	
	void setdata ()
	{
		cout<<"Feet & Inch"<<endl;
		cin>>f>>i;
	}
	void result(Dis m2)
	{
		Dis m3;
		m3.f=f+m2.f;
		m3.i=i+m2.i;		
		
		m3.f=(m3.i/12)+m3.f;
		m3.i=m3.i-((m3.i/12)*12);
		
		cout<<endl<<"======================="<<endl<<endl;
		cout<<"Feet Is := "<<m3.f<<endl<<"Inch Is := "<<m3.i<<endl;
	}
	
};
main()
{
	Dis m1,m2;
	m1.setdata();
	m2.setdata();
	
	m1.result(m2);
}