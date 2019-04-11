#include<iostream>
using namespace std;
class dis
{
public:
    float feet,inch;
    void getdata();
    void showdata();
    dis operator +(dis a)
    {
        int f,i;
        dis res;
        f=a.feet+feet;
        i=a.inch+inch;
        if(i>12)
        {
            int rem=i/12;
            i=i%12;
            f=f+rem;
        }
        res.feet=f;
        res.inch=i;

        return res;

    }
    friend dis operator <(dis d, dis e)
    {
        dis big;
        int s,n;
        s=d.inch+d.feet*12;
        n=e.inch+e.feet*12;
        if(s>=n)
        {
            big.inch=d.inch;
            big.feet=d.feet;
        }
        else
        {
            big.inch=e.inch;
            big.feet=e.feet;
        }
        return big;

    }

};
void dis::getdata()
{
cout<<"\nEnter no of feets:";
cin>>feet;
cout<<"\nEnter no of inches:";
cin>>inch;
}
void dis::showdata()
{
    cout<<feet<<"ft + "<<inch<<"inches \t";
}
int main()
{
    dis a;
    dis b;
    int ch;
    cout<<"\nEnter data for first distance:";
    a.getdata();
    cout<<"\nEnter data for second distance:";
    b.getdata();
    cout<<"\n1.Add \n2.Compare\nEnter your choice(1/2):";
    cin>>ch;
    if(ch==1)
    {
        dis sum;
        sum=a+b;
        cout<<"\nThe sum is";
        sum.showdata();
    }
    else if(ch==2)
    {
        dis comp;
        comp=a<b;
        cout<<"\nThe bigger one is";
        comp.showdata();

    }
    else
        cout<<"\nPlease enter a valid choice...";
    return 0;
}
