#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,s[8],i;
		for(i=0;i<8;i++)
		{
			s[i]=0;
		}		
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			if(a<=8)
			{
				if(s[a-1]<b)
				{
					s[a-1]=b;	
				}	
			}
		}	
		int sum=0;
		for(i=0;i<8;i++)
		{
			sum+=s[i];
		}
		cout<<sum<<endl;
	}
}
