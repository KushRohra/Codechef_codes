#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,x,sum=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x>k)
				sum+=(x-k);
		}
		cout<<sum<<endl;
	}
}
