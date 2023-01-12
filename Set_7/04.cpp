//read and print employee information using multiple inheritance.
#include<iostream>
using namespace std;
class Company
{
	public :
		int no,id;
		char name[100];
		
	void setdata()
	{
		cout<<"=============== COMPNAY DATA ==============="<<endl<<endl;
		cout<<"Enter No :- "<<endl;
		cin>>no;
		cout<<"Enter Name :- "<<endl;
		cin>>name;
		cout<<"Enter Id no :-  "<<endl;
		cin>>id;
	}
		
};
class Home
{
	public :
		char add[100],mo[100];
		
	void setdata1()
	{
		cout<<"=============== HOME DATA ==============="<<endl<<endl;
		cout<<"Enter Mo :- "<<endl;
		cin>>mo;
		cout<<"Enter Address :- "<<endl;
		cin>>add;
	}
		
};
class Employee : public Company, public Home
{
	public :
		
	void getdata()
	{
		cout<<"=============== EMPLOYEE DATA ==============="<<endl<<endl;
		cout<<"Enter the Id No :- "<<no<<endl<<"Enter the Name :- "<<name<<endl<<"Enter the Grid no :- "<<id<<endl<<"Enter the mo :- "<<mo<<endl<<"Enter the address :- "<<
		add;
	}
		
};
main()
{
	Employee e1;
	
	e1.setdata();
	e1.setdata1();
	
	e1.getdata();
	
	
}