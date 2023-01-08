	// create a class Hotel with fields like id, name, type, staff_size, room_size, establish_year, address, rating_type and website.
	// Illustrate the use of encapsulation (strict encapsulation) with this keyword
#include<iostream>
#include<string.h>
using namespace std;
class hotel
{
	private:
		int id,staff,room,year,rate;
		char name[100],type[100],add[100],web[100];
		
	public:
		
		void setter(int id,int staff,int room,int year,int rate,char name[100],char type[100],char add[100],char web[100])
		{
				this->id=id;
				this->staff=staff;
				this->room=room;
				this->year=year;
				this->rate=rate;
				strcpy(this->name,name);
				strcpy(this->type,type);
				strcpy(this->add,add);
				strcpy(this->web,web);
		}
		void getter()
		{
			cout<<"================= SAVED HOTEL DETAILS ================="<<endl;
			cout<<"HOTEL ID := "<<id<<endl<<"NAME := "<<name<<endl<<"HOTEL TYPE := "<<type<<endl<<"STAFF MEMBER := "<<staff<<endl;
			cout<<"ROOM NO := "<<room<<endl<<"ESTABLISH YEAR := "<<year<<endl<<"HOTEL RATEING := "<<rate<<endl<<"ADRESS := "<<add<<endl<<"WEBSITE := "<<web<<endl;
		}
};
main()
{
		hotel a1;
		
		int id,staff,room,year,rate;
		char name[100],type[100],add[100],web[100];
		
		cout<<"================= HOTEL DETAILS INPUT ================="<<endl;
		cout<<"Hotel Id := ";
		cin>>id;
		cout<<"Name := ";
		cin>>name;
		cout<<"Type := ";
		cin>>type;
		cout<<"Staff Member := ";
		cin>>staff;
		cout<<"Room No := ";
		cin>>room;
		cout<<"Establish Year := ";
		cin>>year;
		cout<<"Rate Out Of 5 := ";
		cin>>rate;
		cout<<"Hotel Adress := ";
		cin>>add;
		cout<<"Hotel Website := ";
		cin>>web;
	
		a1.setter(id,staff,room,year,rate,name,type,add,web);
		a1.getter();
}