#include <iostream>
using namespace std;
int main()
{
    long long int sum=0,sum1,n,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sum1=n*(n+1);
    sum1=sum1/2;
    if(sum1==sum)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
