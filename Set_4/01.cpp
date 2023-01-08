	//create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact. Get 5 records

#include<iostream>
using namespace std;
class Emp
{
	private :
		
		char name[100],add[100],email[100],role[100];
		int id,salary,exp,mo;
	
	public :
		
		void setter()
		{
			cout<<"=============== EMPLOYEE DATA ==============="<<endl;
			cout<<"Name := "<<endl;
			cin>>name;
			cout<<"Address := "<<endl;
			cin>>add;
			cout<<"Email := "<<endl;
			cin>>email;
			cout<<"Post := "<<endl;
			cin>>role;
			cout<<"Id := "<<endl;
			cin>>id;
			cout<<"Salary := "<<endl;
			cin>>salary;
			cout<<"Experience In Year := "<<endl;
			cin>>exp;
			cout<<"Contect No. := "<<endl;
			cin>>mo;		
		}
		void getter()
		{
			cout<<"=============== SAVED DATA ==============="<<endl;
			cout<<"Name := "<<name<<endl;
			cout<<"Address := "<<add<<endl;
			cout<<"Email := "<<email<<endl;
			cout<<"Post := "<<role<<endl;
			cout<<"Id := "<<id<<endl;
			cout<<"Salary := "<<salary<<endl;
			cout<<"Experience In Year := "<<exp<<endl;
			cout<<"Contect No. := "<<mo<<endl;
		}	
	
};
main()
{
	Emp e1,e2,e3,e4,e5;
	
	e1.setter();
	e2.setter();	
	e3.setter();	
	e4.setter();
	e5.setter();
	
	e1.getter();
	e2.getter();
	e3.getter();
	e4.getter();
	e5.getter();
}