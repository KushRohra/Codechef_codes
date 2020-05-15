#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,h,i,max=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>h;
            max=max+h-1;
        }
        cout<<max+1<<endl;
    }
}

