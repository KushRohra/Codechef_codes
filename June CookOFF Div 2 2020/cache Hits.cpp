#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, b, m, x, i, curr=-1, c=0;
		cin>>n>>b>>m;
		for(i=0;i<m;i++)
		{
			cin>>x;
			x/=b;
			if(curr!=x)
			{
				curr=x;
				c++;
			}
		}
		cout<<c<<endl;
	}
}

/*
	1
	5 3 3 
	0 3 4
*/
