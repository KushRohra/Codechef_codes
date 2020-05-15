#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mid=0,flag=0,i;
        cin>>n;
        if(n%2==1)
            mid=n/2;
        else
            flag=1;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        if(a[0]!=1)
            flag=1;
        for(i=0;i<mid;i++)
            if(a[i+1]-a[i]!=1)
                flag=1;
        for(i=mid;i<n-1;i++)
            if(a[i]-a[i+1]!=1)
                flag=1;
        if(flag==1)
            cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
}
