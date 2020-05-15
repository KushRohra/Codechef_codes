#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,h,i,sum=0,flag=0;
        cin>>n>>c;
        for(i=0;i<n;i++)
        {
            cin>>h;
            sum=sum+h;
            
        }
        if(sum>c)
            flag=1;
        if(flag==1)
            cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
