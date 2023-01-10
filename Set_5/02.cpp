	//WAP to make Railway Reservation System.
	//Requirements:
	//(A) User Input Train Number , Train Name , Source , Destination , Train Time.
	//(B) Display Record By Search Train Number.
	//(C) Minimum 3 Input Train Record.
#include<iostream>
using namespace std;
class Train
{
	private :	
		char name[100],so[100],de[100],time[100];
	public :
		int no;
	void setter()
		{
			cout<<"============== INSERT TRAIN DATA =============="<<endl;
			cout<<"No";
			cin>>no;
			cout<<"Name";
			cin>>name;
			cout<<"Source";
			cin>>so;
			cout<<"Destination";
			cin>>de;
			cout<<"Time";
			cin>>time;
		}
 	void getter()
		{
			cout<<"============== YOUR TRAIN DATA =============="<<endl;
			cout<<"No := "<<no<<endl<<"Name := "<<name<<endl<<"Source := "<<so<<endl<<"Destination := "<<de<<endl<<"Time := "<<time<<endl;
		}
		
};
main()
{
	
	Train m1[100];
	int i,s;
	
	for(i=0;i<3;i++)
	{
		m1[i].setter();
	}
	cout<<"\n==========================="<<endl;
	cout<<"\nEnter Train No For Details"<<endl;
	cin>>s;
	
	for(i=0;i<3;i++)
	{
		if(m1[i].no==s)
		{
			m1[i].getter();
		}
	}
}