#include<iostream>
#include<string.h>
using namespace std;
main()
{

	char a[100];
	int n,i;
		
	cout<<"Enter The One Alphbate :="<<endl;
	cin>>a;
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]>='A'&& a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	
		else
		{
			a[i]=a[i]-32;
		}
		cout<<a[i];
	}
		
}