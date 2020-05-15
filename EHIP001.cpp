#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100000];
    cin>>s;
    int h,p,l,c=0,i,a[26];
    l=strlen(s);
    for(i=0;i<26;i++)
        a[i]=0;
    p=int('a');
    for(i=0;i<l;i++)
    {
        h=int(s[i])-p;
        if(a[h]==0)
        {
            c++;
            a[h]++;
        }
        else a[h]++;
    }
    cout<<c<<endl;
}
