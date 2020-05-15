#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
                c[0]=a[1]+a[n-1];
            else if(i==n-1)
                c[n-1]=a[n-2]+a[0];
            else c[i]=a[i-1]+a[i+1];
        }
        int max=0,flag=0;
        i=0;
        while(i<n)
        {
            if(b[i]>c[i])
            {
                if(b[i]>max)
                {
                    max=b[i];
                    flag=1;
                }
            }
            i++;
        }
        if(flag==0)
            cout<<"-1"<<endl;
        else cout<<max<<endl;
    }
}
