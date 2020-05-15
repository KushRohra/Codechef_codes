#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,i,c1=0,c2=0;
		char s[100];
		cin>>s;
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='a')
				c1++;
			else c2++;
		}
		if(c1>c2)
			cout<<c2<<endl;
		else cout<<c1<<endl;
	}
} 
