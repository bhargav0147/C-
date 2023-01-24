	//WAP to create a Message class with a constructor that takes a single string with a default value.
	//Create a private member string, and in the constructor simply assign the argument string to your internal string.
	//Create two overloaded member functions called print( ):
	//one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument,
	//which it prints in addition to the internal message.
#include<iostream>
#include<string.h>
using namespace std;
class Massage
{
	private:
		char message[100];
	public:
		int i,n;
		char message1[100];
		Massage()
		{
			cout<<"Enter Any String"<<endl;
			cin>>message1;
			n=strlen(message1);
			for(i=0;i<n;i++)
			{
				message[i]=message1[i];
			}
		}
		void print()
		{
			cout<<endl<<"Your Saved String"<<endl;
			cout<<message<<endl;
		}
		void print(char *a)
		{
			cout<<"================= Two String Addition ================="<<endl;
			cout<<message1;
			cout<<a<<endl;
		}	
};
main()
{
	Massage m1;
	char a[100];
	cout<<"Enter New Any String"<<endl;
	cin>>a;
	
	m1.print();
	m1.print(a);
}


