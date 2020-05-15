#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3,i,max=0;
    cin>>n1>>n2>>n3;
    int a1[n1],a2[n2],a3[n3];
    for(i=0;i<n1;i++)
    {
        cin>>a1[i];
        if(a1[i]>max)
            max=a1[i];
    }
    for(i=0;i<n2;i++)
    {
        cin>>a2[i];
        if(a2[i]>max)
            max=a2[i];
    }
    for(i=0;i<n3;i++)
    {
        cin>>a3[i];
        if(a3[i]>max)
            max=a3[i];
    }
    int a[max];
    for(i=0;i<max;i++)
        a[i]=0;
    for(i=0;i<n1;i++)
        a[a1[i]-1]++;
    for(i=0;i<n2;i++)
        a[a2[i]-1]++;
    for(i=0;i<n3;i++)
        a[a3[i]-1]++;
    int c=0;
    for(i=0;i<max;i++)
        if(a[i]>=2)
            c++;
    cout<<c<<endl;
    for(i=0;i<max;i++)
        if(a[i]>=2)
            cout<<i+1<<endl;
}
