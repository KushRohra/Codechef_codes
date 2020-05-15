#include <iostream>
using namespace std;
long long int gcd(long long int a, long long int b)
{

    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int max,p,n,a,b,k,i,ca,cb,cab;
        cin>>n>>a>>b>>k;
        ca=n/a;
        cb=n/b;
        if(a<b)
            p=a;
        else p=b;
        max=gcd(a,b);
        i=a*b/max;
        cab=n/i;
        p=ca+cb-(2*cab);
        /*cout<<ca<<" "<<cb<<" "<<cab<<" ";
        cout<<p<<" ";*/
        if(p>=k)
            cout<<"Win"<<endl;
        else cout<<"Lose"<<endl;
    }
}
