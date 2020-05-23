#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, d, i;
		cin>>n>>d;
		d=d%n;
		vector<int> v(n, 0);
		for(i=0;i<n;i++)
			cin>>v[i];
		for(i=0;i<d;i++)
		{
			int x=v[n-1];
			v.pop_back();
			v.insert(v.begin(), x);
		}
		for(i=0;i<n;i++)
		    cout<<v[i]<<" ";
		cout<<endl;
	}
}
