#include<iostream>
using namespace std;
class A
{
	public:
		int id,ex;
		char name[100],role[100],salary[100],com_name[100],add[100],email[100],mobo[100];
		
	void setterA()
		{
			cout<<"ID No := ";cin>>id;
			cout<<"Name := ";cin>>name;
			cout<<"Role In Compnay := ";cin>>role;
		}
};
class B : public A
{
	public:
		void setterB()
		{
			cout<<"Salary := ";cin>>salary;
			cout<<"Experiance In Year := ";cin>>ex;
		}
};
class C : public B
{
	public:
		void setterC()
		{
			cout<<"Company Name := ";cin>>com_name;
			cout<<"Address := ";cin>>add;
		}
};
class D : public C
{
	public:
		void setterD()
		{
			cout<<"Email := ";cin>>email;
			cout<<"Contect Number := ";cin>>mobo;
		}
		void getter()
		{
			cout<<"===================== EMPLOYEE DETAILS ====================="<<endl;
			cout<<"ID No := "<<id<<endl;
			cout<<"Name := "<<name<<endl;
			cout<<"Role In Compnay := "<<role<<endl;
			cout<<"Salary := "<<salary<<endl;
			cout<<"Experiance In Year := "<<ex<<endl;
			cout<<"Company Name := "<<com_name<<endl;
			cout<<"Address := "<<add<<endl;
			cout<<"Email := "<<email<<endl;
			cout<<"Contect Number := "<<mobo<<endl;
		}
};
main()
{
	D d1;
	
	d1.setterA();
	d1.setterB();
	d1.setterC();
	d1.setterD();
	d1.getter();
}