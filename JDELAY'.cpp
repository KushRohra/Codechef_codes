#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        cin>>n;
        int s,d;
        while(n--)
        {
            cin>>s>>d;
            if(d-s>5)
                c++;
        }
        cout<<c<<endl;
    }
}
