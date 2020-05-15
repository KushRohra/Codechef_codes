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
        int a[n],b,c=0,i,t,h=0;
        for(i=0;i<n;i++)
        {
            cin>>t;
            a[i]=t-h;
            h=t;
        }
        for(i=0;i<n;i++)
        {
            cin>>b;
            if(b<=a[i])
                c++;
        }
        cout<<c<<endl;
    }
}
