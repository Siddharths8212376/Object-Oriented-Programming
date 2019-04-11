#include<iostream>
using namespace std;
class costumer
{
	char name[30];
	int c_id;
	static float rate;
	static float temp;
	float principal;
	 float balance;
	char ac_type;

public:
	static float y_interest();
	float calbal()
	{return principal+y_interest();}
	const void showbal();
	float returntemp()
	{temp=principal;
	return temp;}
	int getdata();
	void showdata();
	int returnid()
		{return c_id;}

};
float costumer::rate=4;
float costumer::temp=0;


int getdata()
{
int flag=1;
cout<<"\nEnter the name of the costumer:";
cin>>name;
cout<<"\nEnter the account type you want to open(savings-s):";
cin>>ac_type;
cout<<"\nEnter your initial balance:";
cin>>principal;
if(principal>=0)
{
cout<<"\nYou have successfully opened a savings account";
}
else
{
cout<<"\nSorry the account could not be made..";
flag=0;
}
return flag;
}

float costumer::y_interest()
{
return (returntemp()*rate)/100;
}

void showbal() const
{
cout<<"\nYour account balance is :"<<calbal();
}
void showdata()
{
cout<<"\nName:"<<name<<"\nID:"<<c_id<<"\nRate of interest:"<<rate<<"\nInterest obtained:"<<y_interest();
}

int main()
{

costumer c[10];
int n;
int noc;
char ans;
int id;
int flag=0;
cout<<"\n Welcome to our banking services";
cout<<"\n Enter what you want to do:\n1.Create an account for a set of costumers.\n2.Check your balance.\nEnter 1 or 2:";
cin>>n;
do
{
switch(n)
{
case 1:cout<<"\n Enter the number of costumers:";
	cin>>noc;
	for (int i=0;i<noc;i++)
	{
		cout<<"\nEnter the details of the "<<i+1<<" th costumer:";
            if(c[i].getdata())
           cout<<"\nAccount details have been successfully updated.";
               else
               {cout<<"\nPlease enter a valid initial balance.., account could not be made.";
               flag=-1;
               break;
               }
								flag++;
	}
	if(flag==noc)
	{
	    cout<<"\nThe costumer details have been updated. The details are:";
	for(int j=0;j<noc;j++)
	cout<<"\nAccount of costumer id"<<c[j].returnid();
	cout<<c[j].showdata();
    }
    else if(flag)

	break;
case 2:cout<<"\nEnter the costumer id:";
	cin>>id
	for(int j=0 ; j<noc; j++)
	{
	if(c[j].returnid()==id)
	{
	cout<<"\nYour account is registered.. Your balance is:";
	c[j].showbal();
	}
	else
	cout<<"\nYour account is not registered. Please register and then enter again...";
	}
	break;
default:cout<<"\nEnter a valid input.";
}
cout<<"\nDo you want to enter again?";
cin>>ans;

}while(ans=='y' || ans=='Y');

}
