#include<iostream>
using namespace std;
class area;
class coord
{
    float x,y;
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int a, int b)
    {
        x=a;
        y=b;
    }
    float rx(){return x;}
    float ry(){return y;}

    friend class area;
};

class area
{
    float fa;
public:
    area()
    {
        fa=0;
    }
    float findarea(coord a , coord b, coord c)
    {
        fa=0.5*(a.rx()*(b.ry()-c.ry())+b.rx()*(c.ry()-a.ry())+c.rx()*(a.ry()-b.ry()));
        return fa;
    }

};

int main()
{
    coord a,b,c;
    int x1,y1,x2,y2,x3,y3;
    cout<<"\nEnter the coordinates x and y of the first point:";
    cin>>x1>>y1;
    cout<<"\nEnter the coordinates x and y of the second point:";
    cin>>x2>>y2;
    cout<<"\nEnter the coordinates x and y of the third point:";
    cin>>x3>>y3;
    a=coord(x1,y1);
    b=coord(x2,y2);
    c=coord(x3,y3);
    area f;
    float m;
    m= f.findarea(a,b,c);
    cout<<"\nThe area of the triangle made by these coordinates is: "<<m;
}
