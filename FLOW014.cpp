#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,flag1=0,flag2=0,flag3=0,c=0;
        float p;
        cin>>n>>p>>m;
        if(n>50)
        {
            flag1=1;
            c++;
        }
        if(p<0.7)
        {
            flag2=1;
            c++;
        }
        if(m>5600)
        {
            flag3=1;
            c++;
        }
        if(flag1==1 && flag2==1 && flag3==1)
            cout<<"10"<<endl;
        else if(flag1==1 && flag2==1 && flag3==0)
            cout<<"9"<<endl;
        else if(flag2==1 && flag3==1 && flag1==0)
            cout<<"8"<<endl;
        else if(flag1==1 && flag3==1 && flag2==0)
            cout<<"7"<<endl;
        else if(c==1)
            cout<<"6"<<endl;
        else cout<<"5"<<endl;
    }
}
