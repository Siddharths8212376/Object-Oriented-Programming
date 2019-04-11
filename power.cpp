#include<iostream>
#include<math.h>
using namespace std;
class matrix
{


int mat[10][10];
int r,c;

public:
    matrix()
    {
        r=0;c=0;
        for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
            mat[i][j]=0;
    }
    matrix(int a[10][10], int b, int d)
    {
     r=b;
     c=d;
     for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        mat[i][j]=a[i][j];

    }

    matrix operator * (int n)
    {
        matrix prod;
        int a[10][10];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
        {
            for(int k=0;k<n;k++)
            a[i][j]=mat[i][j]*mat[i][j];
        }
        prod=matrix(a,r,c);
        return prod;
    }
    void show()
    {
        for(int i=0;i<r;i++)
        {for(int j=0;j<c;j++)
         {
            cout<<mat[i][j]<<"\t";
         }
             cout<<"\n";
         }
    }
};

int main()
{
      matrix m;
    int r,c, a[10][10];
    cout<<"\nEnter the number of rows:";
    cin>>r;
    cout<<"\nEnter the number of columns:";
    cin>>c;
    cout<<"\nEnter the elements:";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
    cout<<"\nThe matrix is:\n";
     /* for(int i=0;i<r;i++)
        {for(int j=0;j<c;j++)
         {
            cout<<a[i][j]<<"\t";
         }
         cout<<"\n";
        }*/

        m=matrix(a,r,c);
         m.show();
        matrix m2=m*2;
        cout<<"\nThe product matrix will be:\n";
        m2.show();


}
