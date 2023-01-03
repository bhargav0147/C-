	//find leap years from 2000 to 3000
#include<iostream>
using namespace std;
main()
{
   int y=2000,z=3000,i;
   

	for(i=y;i<=z;i++)
	{
		if(i%4==0)
		{
			cout<<i<<endl;
		}
	}
}