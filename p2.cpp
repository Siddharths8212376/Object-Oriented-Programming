#include<iostream>
using namespace std;

// a friend can be declared either in public or private part without losing its meaning
class sid
{

public :
     int a;
    sid()
    {
        a=6;
    }
    void show();

};
int main()
{
    sid s;
    int sid::*p=&sid::a;
    cout<<"\nShowing inside main:"<<"\n";
    s.*p=55;
    cout<<"\nThe value of a is:"<<"\n";
    cout<<s.*p;
}
