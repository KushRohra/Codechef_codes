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
		int i=0,j,flag=0,l;
		cin>>s;
		l=strlen(s);
		while(flag==0 && i<l)
		{
			if(s[i]=='A' && s[i+1]=='A')
				flag=1;
			if(s[i]=='B' && s[i+1]=='B')
				flag=1;		
			i=i+2;	
		}
		if(flag==1)
			cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
}

