	// create a class to read and add two times

#include<iostream>
using namespace std;
class Time
{
	public :
		int h=0,m=0,s=0;
		
		void setdata()
		{
			cout<<"Enter The Time In Second"<<endl;
			cin>>s;
		}
		void result()
		{
			
			m=(s/60)+m;
			s=s-((s/60)*60);
				
			h=(m/60)+h;
			m=m-((m/60)*60);
			
			cout<<"Hour := "<<h<<endl<<"Minut := "<<m<<endl<<"Second := "<<s;	
		}
};
main()
{
	Time d1;
	
	d1.setdata();
	
	d1.result();
}