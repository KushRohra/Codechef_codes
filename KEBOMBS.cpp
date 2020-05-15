#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;
		char s[n];
		int a[n];
		for(i=0;i<n;i++)
			a[i]=0;
		cin>>s;
		if(s[0]=='1')
		{
			a[0]=1;
			a[1]=1;
		}
		if(s[n-1]=='1')
		{
			a[n-1]=1;
			a[n-2]=1;
		}
		for(i=1;i<n-1;i++)
		{
			if(s[i]=='1')
			{
				a[i]=1;
				a[i-1]=1;
				a[i+1]=1;
			}
		}
		int c=0;
		for(i=0;i<n;i++)
			if(a[i]==0)
				c++;
		cout<<c<<endl;
	}
}

