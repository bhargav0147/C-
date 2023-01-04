	// find square root of given numbers from array elements

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float b;
	int i,a[5]={25,81,49,36,64};

	for(i=0;i<5;i++)
	{
		b=sqrt(a[i]);
		cout<<a[i]<<" = Root Is := "<<b<<endl;
	}
}
