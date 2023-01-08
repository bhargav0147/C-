	//create a class which have both static data member and static member function. That class gives details of all states in India
	
#include<iostream>
using namespace std;
class State
{
	public:
		
		static char s1[100],s2[100],s3[100],s4[100],s5[100];
		
		static void setter()
		{
			cout<<"Enter 1 State Name := "<<endl;
			cin>>s1;
			cout<<"Enter 2 State Name := "<<endl;
			cin>>s2;
			cout<<"Enter 3 State Name := "<<endl;
			cin>>s3;
			cout<<"Enter 4 State Name := "<<endl;
			cin>>s4;
			cout<<"Enter 5 State Name := "<<endl;
			cin>>s5;	
		}
		static void getter()
		{
			cout<<"State 1 := "<<s1<<endl<<"State 2 := "<<s2<<endl<<"State 3 := "<<s3<<endl<<"State 4 := "<<s4<<endl<<"State 5 := "<<s5<<endl;
		}

};
char State::s1[100];
char State::s2[100];
char State::s3[100];
char State::s4[100];
char State::s5[100];
main()
{
		State::setter();
		State::getter();
}