	// find factorial using recursion

#include<iostream>
using namespace std;
void fact (int n);
main()
{
	 int n;
	 
	 cout<<"enter the value of N"<<endl;
	 cin>>n;

	fact(n);

}
void fact (int n)
{
	int i,sum;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}	
	cout<<sum;
}	