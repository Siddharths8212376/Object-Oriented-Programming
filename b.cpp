//customer again..
#include<iostream>
using namespace std;
class banker
{
    int id;
    char name[30];
    static float rate;
    static float temp;
    float principal;
    float balance;
public:
    banker()
    {
        id=0;
        //name="\0";
        principal=0;
        balance=0;
    }
    static float interestpa();
    float calbal();
    int returnid()
    {return id;}
    float showbal() const;
    float returntemp();
    int getdata();
    void showdata();

};
float banker::rate=0.04;
float banker::temp=0;

float banker::returntemp()
{

    return temp;
}

int banker::getdata()
{
    cout<<"\nEnter the name of the client:";
    cin>>name;
    cout<<"\nEnter the ID of the client:";
    cin>>id;
    cout<<"\nEnter the initial balance:";
    cin>>principal;
    if(principal>=0)
        {cout<<"\nAccount successfully created.";
        temp+=principal;
        return 1;
        }
    else
    {
     cout<<"\nEnter a valid initial balance..Account wasn't created.";
     return 0;
    }
}

float banker::interestpa()
{
  banker b;
  return (b.returntemp()*rate);
}

void banker::showdata()
{
  cout<<"\nNAME:"<<name<<"\nID:"<<id<<"\nInitial Balance:"<<principal<<"\nINTEREST Obtained:"<<banker::interestpa();
}




float banker::showbal() const
{

  return balance;
}

float banker::calbal()
{
  balance= principal+banker::interestpa();
}

int main()
{
  banker a[10];


int n;
int noc;
char ans;
int id;
int flag=0;
int f2=0;
do
{


cout<<"\n Welcome to our banking services";
cout<<"\n Enter what you want to do:\n1.Create an account for a set of costumers.\n2.Check your balance.\nEnter 1 or 2:";
cin>>n;


switch(n)
{
case 1:cout<<"\n Enter the number of costumers:";
	cin>>noc;
	for (int i=0;i<noc;i++)
	{
		cout<<"\nEnter the details of client no. "<<i+1<<" :";
		int k=a[i].getdata();
            if(k==1)
           cout<<"\nAccount details have been successfully updated.";
               else if(k==0)
               {cout<<"\nData was inputted incorrectly, enter again...";
               break;
               }
								flag++;
	}
	if(flag==noc)
	{
	    cout<<"\nThe costumer details have been updated. The details are:";
	for(int i=0;i<noc;i++)
	{cout<<"\nAccount of costumer id"<<a[i].returnid();
	a[i].showdata();}
    }
	break;


case 2:cout<<"\nEnter the costumer id:";
	cin>>id;

	for(int j=0 ; j<noc; j++)
	{
	if(a[j].returnid()==id)
	{
    a[j].calbal();
	cout<<"\nYour account is registered.. Your balance is:"<<a[j].showbal();
  cout<<"\n";
	}
    else
      f2++;

	}
  if(f2>0)
  cout<<"\nAccount not registered. Please enter again..";
	         break;


default:cout<<"\nEnter a valid input.";
}
cout<<"\nDo you want to enter again?";
cin>>ans;

}while(ans=='y' || ans=='Y');

  return 0;

}

