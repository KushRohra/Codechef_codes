#include <iostream>
using namespace std;
int isprime(int n)
{
    int i=2;
    while(i*i<=n)
    {
        if(n%i==0)
            return 0;
        i++;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,flag=0,x1;
        cin>>x>>y;
        x=x+y;
        x1=x;
        while(flag==0)
        {
            x++;
            y=isprime(x);
            if(y==1)
                flag=1;
        }
        cout<<x-x1<<endl;
    }
}

