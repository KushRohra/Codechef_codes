#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i,n=s.length(),f=0, c=0;
		for(i=0;i<n-1;i++)
		{
			if(f==0)
			{
				if(s[i]=='x' && s[i+1]=='y')
				{
					c++;
					f=1;
				}
				else if(s[i]=='y' && s[i+1]=='x')
				{
					c++;	
					f=1;
				}	
			}
			else f=0;
		}
		cout<<c<<endl;
	}
}
