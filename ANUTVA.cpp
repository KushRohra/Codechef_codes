#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        sum=(n*n)+(3*n);
        sum=sum/2;
        cout<<sum<<endl;
    }
}
