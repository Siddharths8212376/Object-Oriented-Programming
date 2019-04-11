#include<iostream>
using namespace std;
class consumer
{
    static float interest;
    int c_id;
    char c_name[20];
    static float rate;
    int principal;
    int time;
    static float bal;
    static float s;

public:
    void getdata();
    static float yearly_interest();
    float balance() const;


};
float consumer::interest=0;
float consumer::rate=0;
float consumer::bal=0;
float consumer::s=0;
void consumer::getdata()
{
    cout<<"\nEnter the name of the costumer:";
    cin>>c_name;
    cout<<"\nEnter the id of the costumer:";
    cin>>c_id;
    cout<<"\nEnter the rate of interest:";
    cin>>rate;
    cout<<"\nEnter the time in years:";
    cin>>time;
    cout<<"\nEnter the amount invested or borrowed:";
    cin>>principal;
    cout<<"\nEnter the initial balance:";
    cin>>bal;
s=(principal*rate*time)/100;
bal+=principal+yearly_interest();

}
float consumer::yearly_interest()
{
    interest=s;
    cout<<"\nThe interest is:"<<interest;
  return interest;
}

float consumer::balance() const
{

cout<<"\nThe balance in the account id "<<c_id<<" is:"<<bal;

}

int main()
{       consumer c;
        c.getdata();

        c.balance();

    return 0;
}
