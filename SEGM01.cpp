#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c=0;
		char s[100000];
		cin>>s;
		int l,i,j,flag=0;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='1')
			{
				c++;
				if(flag==0)
				{
					j=i;
					flag=1;
				}
			}
		}
		int flag1=0;
		if(c!=0)
			flag1=1;
		int k,c1=0;
		for(k=j;k<l;k++)
		{
			if(s[k]=='1')
				c1++;
			else break;	
		}			
		if(c1==c && flag1==1)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

