#include <iostream>
using namespace std;
#include<string.h>
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,a[n];
        char s[10];
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(strcmp(s,"milk")==0)
                a[i]=1;
            else a[i]=0;
        }
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                if(a[i+1]!=1 && i+1<n)
                    flag=1;
                if(a[n-1]==0)
                    flag=1;
                if(flag==1)   
                    break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

