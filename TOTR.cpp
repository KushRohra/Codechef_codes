#include <iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int t,p,l,p1,k,i,j;
    cin>>t;
    p1=int('a');
    char s[26];
    int a[26];
    cin>>s;
    for(i=0;i<26;i++)
    {
        p=int(s[i]);
        a[i]=p;
    }
    for(i=0;i<t;i++)
    {
        char s1[100];
        cin>>s1;
        l=strlen(s1);
        char s2[l];
        strcpy(s2,s1);
        for(j=0;j<l;j++)
        {
            if(s1[j]=='_')
                s2[j]=char(32);
            else
            {
                if(isupper(s1[j]))
                {
                    s1[j]=tolower(s1[j]);
                    p=int(s1[j])-p1;
                    k=a[p];
                    s2[j]=char(k);
                    s2[j]=toupper(s2[j]);
                }
                else if(islower(s1[j]))
                {
                    p=int(s1[j])-p1;
                    k=a[p];
                    s2[j]=char(k);
                }
            }
        }
        cout<<s2<<endl;
    }
}
