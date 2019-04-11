#include<iostream>
using namespace std;
const int size=4;

class vector
{
    int v[size];
public:
    vector();
    vector(int x[]);
    friend vector operator *(int a, vector b);
    friend vector operator *(vector b, int a);
    friend istream & operator >>(istream &, vector &);
    friend ostream & operator <<(ostream &, vector &);
};

vector:: vector()
{
    for(int i=0;i<size;i++)
    v[i]=0;

}
vector:: vector(int x[4])
{
    for(int i=0;i<size;i++)
        v[i]=x[i];

}

vector operator*(int a, vector b)
{
    vector c;
    for(int i=0;i<size;i++)
        c.v[i]=a*b.v[i];
    return c;
}

vector operator*(vector b, int a)
{
    vector k;
    for(int i=0;i<size;i++)
        k.v[i]=a*b.v[i];
    return k;
}
istream & operator >> (istream &in, vector &b)
{
    for(int i=0; i<size;i++)
        in>>b.v[i];
    return(in);

}
ostream & operator << (ostream &out, vector &b)
{
    out<<"( "<<b.v[0];
    for(int i=1; i<size;i++)
    out<<", "<<b.v[i];
    out<<") ";
    return(out);

}

int x[size]={2,3,5,6};

int main()
{
    vector m;
    vector n=x;

    cout<<"\nEnter the elements of the vector m"<<"\n";
    cin>>m;
    cout<<"\n";
    cout<<"\n M="<<m<<"\n";
    vector p, q;
    p=2*n;
    q=m*4;
    cout<<"\np="<<p<<"\n";
    cout<<"q="<<q<<"\n";
    return 0;
}
