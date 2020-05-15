#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        int sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                sum1=sum1+a[i];
            else sum1=sum1+b[i];
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                sum2=sum2+b[i];
            else sum2=sum2+a[i];
        }
        if(sum1<sum2)
            cout<<sum1<<endl;
        else cout<<sum2<<endl;
    }
}

