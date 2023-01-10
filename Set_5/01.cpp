	// create a class for student to get and print details of N students. (with use of array of objects)
#include<iostream>
using namespace std;
class Studant
{
	private:
		int id;
		char name[100],std[100],city[100];
		
	public:
		void setter()
		{
			cout<<"============== INSERT DATA =============="<<endl;
			cout<<"ID";
			cin>>id;
			cout<<"Name";
			cin>>name;
			cout<<"Std";
			cin>>std;
			cout<<"City";
			cin>>city;
		}
		void getter()
		{
			cout<<"============== SAVED DATA =============="<<endl;
			cout<<"ID := "<<id<<endl<<"Name := "<<name<<endl<<"Std := "<<std<<endl<<"City := "<<city<<endl;
		}
};
main()
{
	int n,i;
	
	cout<<"Enter Number Of Studunt"<<endl;
	cin>>n;
		
	Studant e1[100];
		
	for(i=0;i<n;i++)
	{
		e1[i].setter();
	}
	for(i=0;i<n;i++)
	{
		e1[i].getter();
	}
}