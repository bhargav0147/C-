//WAP to make Supermarket Billing System.
//Requirements:
//(A) Verify User Id And Password
//(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
//(C) Display All Record In Ascending order (by item Number)
#include<iostream>
using namespace std;
class Bigbazar
{
		private:
			int qu,tax,dis,id=888,password=777,uid,upassword;
			char itemname[100];
			
		public :
			int no;
			int login()
			{
				cout<<"Enter the User Id Number"<<endl;
				cin>>uid;
				cout<<"Enter the Password"<<endl;
				cin>>upassword;
				
				if(uid==id && upassword==password)
				{
					cout<<"---- LOGIN SUCCESS ---- \n";
					return 1;
				}
				else
				{
					cout<<" ========== --- WRONG PASSWORD --- ========== \n";
					return 0;
				}
			}
			void buyitem()
			{
				cout<<"===================== ENTER THE ITEM ====================="<<endl;
				cout<<"Enter The Item No"<<endl;
				cin>>no;
				cout<<"Enter The Item Name"<<endl;
				cin>>itemname;
				cout<<"Enter The Quantity"<<endl;
				cin>>qu;
				cout<<"Enter The Discount"<<endl;
				cin>>dis;
				cout<<"Enter The Tax"<<endl;
				cin>>tax;
			}
			void showitem()
			{
				cout<<no<<"\t"<<itemname<<"\t"<<qu<<"\t"<<dis<<"\t"<<tax<<"\t"<<endl;
			}
};
main()
{
	int islogin,n,i,j;	
	Bigbazar b1,b2[100],temp;

	do
	{
		islogin=b1.login();
	}
	while(islogin!=1);
	if(islogin==1)
	{
		cout<<"ENTER THE TOTAL BUY PRODUCT"<<endl;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			b2[i].buyitem();
		}	
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b2[i].no>b2[j].no)
				{
					temp=b2[j];
					b2[j]=b2[i];
					b2[i]=temp;
				}
			}
		}
		cout<<"===================== YOUR ITEM ====================="<<endl;
		for(i=0;i<n;i++)
		{
			b2[i].showitem();
		}
	}

	
}