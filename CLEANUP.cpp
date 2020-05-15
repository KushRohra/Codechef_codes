#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        int h,c[n];
        for(i=0;i<n;i++)
            c[i]=0;
        for(i=0;i<m;i++)
        {
            cin>>h;
            c[h-1]=1;
        }
        int a[n],b[n],c1=0,c2=0,p=1;
        for(i=0;i<n;i++)
        {
            if(c[i]==0 && p==1)
            {
                a[c1]=i+1;
                c1++;
                p=2;
            }
            else if(c[i]==0 && p==2)
            {
                b[c2]=i+1;
                c2++;
                p=1;
            }
        }
        if(c1==0)
            cout<<endl;
        else
        {
            for(i=0;i<c1;i++)
                cout<<a[i]<<" ";
            cout<<endl;        
        }
        if(c2==0)
            cout<<endl;
        else
        {
            for(i=0;i<c2;i++)
                cout<<b[i]<<" ";\
            cout<<endl;
        }
    }
}

