#include<bits/stdc++.h>
using namespace std;
long long int fact(int x,int p)
{
	if(x<=1)
		return 0;
	if(x==2)
		return 1;
	long long int z,y=x;
	if(y%2==0)
	{
		z=y/2;
		z*=(y-1);
	}
	else
	{
		z=(y-1)/2;
		z*=y;
	}
	return z;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,x,two=0,zero=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x==2)
				two++;
			else if(x==0)
				zero++;
		}
		//cout<<two<<" "<<zero<<endl;
		cout<<fact(two,2)+fact(zero,2)<<endl;
	}
}
