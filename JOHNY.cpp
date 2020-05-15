#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n;
        int p,l,a[n],j;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>l;
        p=a[l-1];
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]<a[j])
                {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
        }
        for(i=0;i<n;i++)
            if(p==a[i])
            {
                cout<<i+1<<endl;
                break;
            }
    }
}
