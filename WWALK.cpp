#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n], b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		int x1=0, x2=0, sum=0;
		for(i=0;i<n;i++)
		{
			if(x1==x2 && a[i]==b[i])
			{
				sum+=a[i];
			}
			x1+=a[i];
			x2+=b[i];
		}
		cout<<sum<<endl;
	}
}
/*
3
4
1 3 3 4
1 2 4 4
2
2 3
3 2
2
3 3
3 3
*/

