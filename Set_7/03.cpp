	//mother class animal. Inside it define a name and an age variables, and set_value() function.
	//Then create two bases variables Zebra and Dolphin
	//which write a message telling the age, the name and giving some extra information (e.g. place of origin)
#include<iostream>
using namespace std;
class Animal
{
	public:
		char age[100],name[100],place[100];
		Animal()
		{
			cout<<"============ Enter Animal Details ============"<<endl;
			cout<<"Name := ";cin>>name;
			cout<<"Age := ";cin>>age;
			cout<<"Place of Orrigin:= ";cin>>place;
		}
};
class Zebra : public Animal
{
	public :
		
	void getter()
	{
		cout<<"=================================="<<endl;
		cout<<"Name := "<<name<<endl;
		cout<<"Age := "<<age<<endl;
		cout<<"Place of Orrigin:= "<<place<<endl;
	}
};
class Dolphin : public Animal
{
	public :
	void getter()
	{
		cout<<"=================================="<<endl;
		cout<<"Name := "<<name<<endl;
		cout<<"Age := "<<age<<endl;
		cout<<"Place of Orrigin:= "<<place<<endl;
	}
};
main()
{
	Dolphin d1;
	Zebra z1;
	
	d1.Dolphin::getter();
	z1.getter();
}

