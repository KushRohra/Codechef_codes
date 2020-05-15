#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[100];
		cin>>s;
		int k,l,t,i,c[26];
		t=int('a');
		l=strlen(s);
		for(i=0;i<26;i++)
		    c[i]=0;
		for(i=0;i<l;i++)
		{
			k=int(s[i])-t;
			c[k]++;
		}
		int flag=0;
		for(i=0;i<26;i++)
		{
			if(c[i]>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}
