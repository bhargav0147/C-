//CHECK GIVEN STRING IS NUMERIC OR NOT.

#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[100];
	int n,i,alpha=0,no=0;
	
	cout<<"Enter The String"<<endl;
	cin>>a;
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{ 	
		
		 if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
			alpha++;
			
		}
		else if (a[i]>='0' && a[i]<='9')
		{
			no++;
			
		}
	
	}
		if(no==0)
		{
			cout<<"This Is Not Numeric"<<endl;
		}
		else
		{
			cout<<"This Is Numeric";
		}
	
}