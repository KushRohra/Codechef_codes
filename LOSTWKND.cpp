#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,x,sum=0,p;
		for(i=0;i<5;i++)
		{
			cin>>x;
			sum+=x;
		}
		//cout<<sum<<" ";
		cin>>p;
		sum*=p;
		//cout<<sum<<endl;
		if(sum>24*5)
			cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

/*
2
14 10 12 6 18 2
10 10 10 10 10 3
*/
