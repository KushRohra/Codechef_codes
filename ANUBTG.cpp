#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        int sum=0,a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            for(j=0;j<=i;j++)
            {
                if(a[i]>a[j])
                {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
        }
        i=0;
        for(i=0;i<n;)
        {
            if(i+2>n)
                break;
            a[i+2]=0;
            if(i+3>n)
                break;
            else a[i+3]=0;
            i=i+4;
        }
        for(i=0;i<n;i++)
            sum=sum+a[i];
        cout<<sum<<endl;
    }
}
