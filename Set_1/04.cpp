	// check if a given character is vowel or consonant
	
#include<iostream>
using namespace std;
main()
{
	char a;
	
	cout<<"Enter The Character := "<<endl;
	cin>>a;
	
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"This Character Is Vowel"<<endl;
	}
	else
	{
		cout<<"This Character Is Consonant"<<endl;
	}
}
