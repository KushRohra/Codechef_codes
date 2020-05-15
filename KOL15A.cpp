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
		int i,sum=0,n=s.length(),p=48;
		for(i=0;i<n;i++)
		{
			if(int(s[i])-p>=0 && int(s[i])-p<=9)
				sum=sum+int(s[i])-p;
		}
		cout<<sum<<endl;
	}
}
