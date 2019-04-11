#include<iostream>
using namespace std;

class student
{
protected:
    char name[50];
    int month, day, year,rno;
public:
    void getdata()
    {
        cout<<"\ngetting data for object";
    }

    virtual void result()=0;
};

class ug: public student
{
public:
    void result()
    {
        cout<<"\ncalling st1 ug";
    }

};
class pg: public student
{
public:

      void result()
      {
          cout<<"\ncalling st2 pg";
      }

};
int main()
{
    pg st1;
    ug st2;
    st1.getdata();
    st2.getdata();
    st1.result();
    st2.result();
    return 0;
}
