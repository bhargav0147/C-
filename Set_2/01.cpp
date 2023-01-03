#include<iostream>
using namespace std;
void swap (int *ar1, int *ar2, int n,int i);
main()
{
	int ar1[10],ar2[10],n,i;
	
	cout<<"Enter The Size Of Array"<<endl;
	cin>>n;
	cout<<"Enter The Value Of 1st Array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>ar1[i];
	}
	cout<<"Enter The Value Of 2nd Array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>ar2[i];
	}
	
	swap(ar1,ar2);
	cout<<endl<<"===========After Value Swap==========="<<endl;
	for(i=0;i<n;i++)
	{
		cout<<ar1[i]<<endl;
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<ar2[i]<<endl;
	}
}
void swap (int *ar1, int *ar2, int n)
{
    int i=0,temp=0;
	for (i=0;i<n;i++)
	{
		temp   = ar1[i];
        ar1[i] = ar2[i];
        ar2[i] = temp;
	}
	
}