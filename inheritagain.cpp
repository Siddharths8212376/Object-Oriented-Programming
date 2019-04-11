#include<iostream>
using namespace std;
class person
{
protected:
    char name[30];
    int code;

};

class admin:virtual public person
{
protected:
    int experience;
};
class account: virtual public person
{
protected:
    float pay;
};

class master: public admin, public account
{
public:
    void getdata()
    {
    cout<<"\nEnter name, code, experience and pay of the master:";
    cin>>name>>code>>experience>>pay;
    }

    void show()
    {
        cout<<name<<code<<experience<<pay;
    }
};

int main()
{
    master m;
    m.getdata();
    m.show();
}
