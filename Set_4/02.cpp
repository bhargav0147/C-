	//create a class which Read and print Class, Student details using Two Classes. (Make two classes, create one classe's obj in another class
	
#include<iostream>
#include<string.h>
using namespace std;
class Come
{
	public :
		char name[100],city[100];
		int id,std;
		
		
	void setdata()
	{
		cout<<"Enter Studant Name"<<endl;
		cin>>name;
		cout<<"Enter Studant ID"<<endl;
		cin>>id;
		cout<<"Enter Studant STD"<<endl;
		cin>>std;
		cout<<"Enter Studant City"<<endl;
		cin>>city;
		
	}
};
class Out
{
	public :
			
	void getdata(Come a1)
	{
			cout<<"Name := "<<a1.name<<endl<<"Id no := "<<a1.id<<endl<<"Std := "<<a1.std<<endl<<"City := "<<a1.city<<endl;
	}	
};
main()
{
	Come a1;
	Out b1;
	
	a1.setdata();
	b1.getdata(a1);
}
