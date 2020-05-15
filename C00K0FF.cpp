#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag[5],i,n;
        cin>>n;
        char s[20];
        for(i=0;i<5;i++)
            flag[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>s;
            if(strcmp(s,"cakewalk")==0)
                flag[0]=1;
            else if(strcmp(s,"simple")==0)
                flag[1]=1;
            else if(strcmp(s,"easy")==0)
                flag[2]=1;
            else if(strcmp(s,"medium")==0 || strcmp(s,"easy-medium")==0)
                flag[3]=1;
            else if(strcmp(s,"hard")==0 || strcmp(s,"medium-hard")==0)
                flag[4]=1;
        }
        int flag1=0;
        for(i=0;i<5;i++)
        {
            if(flag[i]==0)
                flag1=1;
        }
        if(flag1==1)
            cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
