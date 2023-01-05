#include<iostream>
using namespace std;
class Time 
{
	public :
		
		int h=0,m=0,s=0;
		
		void set()
		{
			cout<<"Enter Hour & Minut & second"<<endl;
			cin>>h>>m>>s;
		}
		void result(Time d2, Time d3)
		{
			Time d4;
			
			d4.s=s+d2.s+d3.s;
			d4.m=m+d2.m+d3.m;
			d4.h=h+d2.h+d3.h;
			
			d4.m=(d4.s/60)+d4.m;	
			d4.s=d4.s-((d4.s/60)*60);
			
			d4.h=(d4.m/60)+d4.h;	
			d4.m=d4.m-((d4.m/60)*60);
			
			cout<<"hour := "<<d4.h<<endl<<"Minut := "<<d4.m<<endl<<"Second := "<<d4.s<<endl;
		}
};
main()
{
	Time d1,d2,d3;
	
	d1.set();
	d2.set();
	d3.set();
	
	d1.result(d2,d3);
}