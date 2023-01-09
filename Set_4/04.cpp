	//create two class HighSchool and College with fields like id, stu_name, stu_roll_no, stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address
	// Make suitable setter and getter with use of static data members
#include<iostream>
using namespace std;
class Highschool
{
	public:
	static int id,roll,age;
	static	char name[100],in[100],add[100],std[100],mo[100];

	static void setdata()
	{
		cout<<"==================== ENTER HIGHSCHOOL STUDANT DATA ===================="<<endl;
		cout<<"ID := ";
		cin>>id;
		cout<<"NAME := ";
		cin>>name;
		cout<<"ROLL := ";
		cin>>roll;
		cout<<"STD := ";
		cin>>std;
		cout<<"AGE := ";
		cin>>age;
		cout<<"CONTECT := ";
		cin>>mo;
		cout<<"INSTITUTE := ";
		cin>>in;
		cout<<"ADDRESS := ";
		cin>>add;
	}
	static void getdata()
	{
		cout<<"============================== HIGHSCHOOL DATA =============================="<<endl;
		cout<<"ID := "<<id<<endl<<"NAME := "<<name<<endl<<"ROLL := "<<roll<<endl<<"STD := "<<std<<endl<<"AGE := "<<age<<endl;
		cout<<"CONTECT := "<<mo<<endl<<"INSTITUTE := "<<in<<endl<<"ADDRESS := "<<add<<endl;
	}
};
class School
{
	public:
		
		static void setter()
		{
			cout<<"==================== ENTER SCHOOL STUDANT DATA ===================="<<endl;
			cout<<"ID := ";
			cin>>Highschool::id;
			cout<<"NAME := ";
			cin>>Highschool::name;
			cout<<"ROLL := ";
			cin>>Highschool::roll;
			cout<<"STD := ";
			cin>>Highschool::std;
			cout<<"AGE := ";
			cin>>Highschool::age;
			cout<<"CONTECT := ";
			cin>>Highschool::mo;
			cout<<"INSTITUTE := ";
			cin>>Highschool::in;
			cout<<"ADDRESS := ";
			cin>>Highschool::add;
		}
		static void getter()
		{
			cout<<"============================== SCHOOL DATA =============================="<<endl;
			cout<<"ID := "<<Highschool::id<<endl<<"NAME := "<<Highschool::name<<endl<<"ROLL := "<<Highschool::roll<<endl<<"STD := "<<Highschool::std<<endl<<"AGE := "<<Highschool::age<<endl;
			cout<<"CONTECT := "<<Highschool::mo<<endl<<"INSTITUTE := "<<Highschool::in<<endl<<"ADDRESS := "<<Highschool::add<<endl;
		}
			
};
int Highschool::id;
int Highschool::roll;
char Highschool::std[100];
int Highschool::age;
char Highschool::mo[100];
char Highschool::name[100];
char Highschool::in[100];
char Highschool::add[100];
main()
{
		
	Highschool::setdata();
	Highschool::getdata();
	School::setter();
	School::getter();
}
