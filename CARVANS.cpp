#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
        {
            int flag=0,j=0;
            while(flag==0 && j<i)
            {
                if(a[j]<a[i])
                    flag=1;
                j++;
            }
            if(flag==0)
                c++;
        }
        cout<<c<<endl;
    }
}
