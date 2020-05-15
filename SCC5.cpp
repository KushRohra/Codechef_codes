#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,i,j;
        cin>>n>>r;
        int a[2][n];
        for(i=0;i<2;i++)
            for(j=0;j<n;j++)
                a[i][j]=0;
        int p,q;
        for(i=0;i<r;i++)
        {
            cin>>p>>q;
            a[0][q-1]++;
            a[1][p-1]++;
        }
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(a[0][i]==n-1)
            {
                if(a[1][i]==0)
                {
                    j=i+1;
                    flag=1;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            cout<<"dead"<<endl;
        else cout<<"alive "<<j<<endl;
    }
}
