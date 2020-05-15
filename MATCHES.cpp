#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		a=a+b;
		int sum=0,q[10]={6,2,5,5,4,5,6,3,7,6};
		while(a!=0)
		{
			b=a%10;
			a=a/10;
			sum+=q[b];
		}
		cout<<sum<<"\n";
	}
}
