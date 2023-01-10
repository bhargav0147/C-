#include<iostream>
using namespace std;
class Bank
{
	private :
			char n[100],acno[100],mono[100],email[100];
			int acm=20000,b=0;
	public:
		int a;
		void intro()
		{
			cout<<"\t"<<"	-: BANK MANAGMENT SYSTEM :-"<<endl;
			cout<<"\t"<<"--------------------------------------------"<<endl;
			cout<<"\t"<<"	-: Designed N Programed By :-"<<endl;
			cout<<"\t"<<"--------------------------------------------"<<endl;
			cout<<"\t"<<"	    BHARGAV G KALARIYA	"<<endl<<endl;
			cout<<"\t"<<"	      -: Trainer :-		"<<endl;
			cout<<"\t"<<"--------------------------------------------"<<endl;
			cout<<"\t"<<"	      VIDIT SAVALIYA		"<<endl;
		}
		void staff()
		{
			cout<<"========================================="<<endl;
			cout<<"ENTER THE NAME OF STAFF\t := ";cin>>n;
			cout<<"ENTER THE ACC NUMBER OF STAFF\t := ";cin>>acno;
			cout<<"ENTER THE PHONE NO OF STAFF\t := ";cin>>mono;
			cout<<"ENTER THE E-MAIL OF STAFF\t := ";cin>>email;
		}
		void acc()
		{
			cout<<"---------------------------------------"<<endl;
			cout<<"NAME\t\t:= "<<n<<endl;
			cout<<"ACC NO\t\t:= "<<acno<<endl;
			cout<<"PHONE NO\t:= "<<mono<<endl;
			cout<<"E-MAIL\t\t:= "<<email<<endl;
			cout<<"---------------------------------------"<<endl;
			cout<<"PRESS [1] TO DEPOSITE THE MONEY : "<<endl;
			cout<<"PRESS [2] TO TRANSFER THE MONEY : "<<endl;
			cout<<"PRESS [3] TO WITHDRAW THE MONEY : "<<endl;
			cin>>a;
		}
		void last()
		{
			switch(a)
			{
				case 1:
				{
					cout<<"-----------------------------"<<endl;
					cout<<"Your Actual Amount Is := "<<acm<<endl;
					cout<<"-----------------------------"<<endl;
					cout<<"Enter Amonut For Deposite := ";cin>>b;
					cout<<endl<<"Congrates Your Amount Has Diposite Successfully"<<endl;
					cout<<endl<<"Your Account Amount Is := "<<acm+b<<endl;
					break;
				}
				case 2:
				{
					cout<<"-----------------------------"<<endl;
					cout<<"Your Actual Amount Is := "<<acm<<endl;
					cout<<"-----------------------------"<<endl;
					cout<<"Enter Amonut For Transfer := "<<endl;
					cin>>b;
					cout<<endl<<"Congrates Your Amount Has Transfer Successfully"<<endl;
					cout<<endl<<"Your Account Amount Is := "<<acm-b<<endl;
					break;
				}
				case 3:
				{
					cout<<"-----------------------------"<<endl;
					cout<<"Your Actual Amount Is := "<<acm<<endl;
					cout<<"-----------------------------"<<endl;
					cout<<"Enter Amonut For Withdraw := "<<endl;
					cin>>b;
					cout<<endl<<"Congrates Your Amount Has Withdraw Successfully"<<endl;
					cout<<endl<<"Your Account Amount Is := "<<acm-b<<endl;
					break;
				}
				default:
				{
					cout<<"Invalid Number"<<endl;
				}
			}
		}
};
main()
{
	Bank b1;
	b1.intro();
	int n; 
	char s;
	cout<<"Press 0 For Continue ... := ";cin>>n;
	if(n==0)
	{
		cout<<"Press S to Log in as Staff := ";cin>>s;
	}
	if(s=='s')
	{
		b1.staff();
		b1.acc();
	}
	b1.last();
}