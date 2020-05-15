#include <iostream>
using namespace std;
#include<string.h>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[100000];
        cin>>s;
        int i,l,flag=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='*')
            {
                if(s[i+1]=='0')
                    s[i+1]='1';
                if(s[i+2]=='0')
                    s[i+2]='1';
            }
        }
        for(i=0;i<l;i++)
            if(s[i]=='0')
                flag=1;
        if(flag==1)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
