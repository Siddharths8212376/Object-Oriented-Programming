#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b;
cout<<"\nEnter the integers a and b";
cin>>a>>b;

int i=2;
do
{

if(a%i==0 && b%i==0)
{a=a/i;b=b/i;}
else
i++;
}while(i<=b/2);
cout<<"\nThe reduced form is a/b: "<<a<<"/"<<b;
}
