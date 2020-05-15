#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
        return 1;
    int i,f=1;
    for(i=2;i<=n;i++)
        f=f*i;
    return f;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,k,l;
        cin>>n>>m;
        int sum[m];
        for(i=0;i<m;i++)
            sum[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>k;
            for(j=m-1;j>=0;j--)
            {
                l=k%10;
                sum[j]=sum[j]+l;
                k=k/10;
            }
        }
        int suma=0,c,d;
        for(i=0;i<m;i++)
        {
            c=factorial(sum[i]);
            d=factorial(sum[i]-2);
            d=d*2;
            c=c/d;
            suma=suma+c;
        }
        cout<<suma<<endl;
    }
}
