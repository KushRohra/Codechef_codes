#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j,c=0;
		cin>>n;
		int i,f,a[26],p,l,b[26];
		f=int('a');
		for(i=0;i<26;i++)
			a[i]=0;
		char s[2000];
		for(i=0;i<n;i++)
		{
			for(j=0;j<26;j++)
				b[j]=0;
			cin>>s;
			l=strlen(s);
			for(j=0;j<l;j++)
			{
				p=int(s[j])-f;
				b[p]=1;
			}
			if(i!=0)
			{
				for(j=0;j<26;j++)
				{
					if(a[j]==1 && b[j]==1)
						a[j]=1;
					else a[j]=0;
				}
			}
			else
			{
				for(j=0;j<26;j++)
					a[j]=b[j];
			}
		}
		if(n>1)
		{
			for(i=0;i<26;i++)
			{
				if(a[i]==1)
					c++;
			}
			cout<<c<<endl;	
		}
		else
		{
			for(i=0;i<26;i++)
				if(a[i]>0)
					c++;
			cout<<c<<endl;
		}
	}
}
