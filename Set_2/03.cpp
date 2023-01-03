	// illustrate the use of inline function by creating a function which prints a multiplication table of given number

#include<iostream>
using namespace std;
void mul (int b);
main()
{
	int a;	
	
	cout<<"Enter The Value For Multiplication :="<<endl;
	cin>>a;
	
	mul(a);
	
}
void mul (int b)
{
	int n=1;
	while(n<=10)
	{	
		cout<<b<<" X "<<n<<" = "<<b*n<<endl;
		n++;
	}
}
