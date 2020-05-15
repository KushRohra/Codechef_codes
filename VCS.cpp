#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,i,j,c1=0,c2=0;
		cin>>n>>m>>k;
		int a[n],b[n],c[n],d[n];
		for(i=0;i<n;i++)
		{
			a[i]=0;
			b[i]=0;
			c[i]=0;
			d[i]=0;
		}
		for(i=0;i<m;i++)
		{
			cin>>j;
			a[j-1]=1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
				b[i]=1;
		}
		for(i=0;i<k;i++)
		{
			cin>>j;
			c[j-1]=1;
		}
		for(i=0;i<n;i++)
		{
			if(c[i]==0)
				d[i]=1;
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==1 && c[i]==1)
				c1++;
			if(b[i]==1 && d[i]==1)
				c2++;
		}
		cout<<c1<<" "<<c2<<endl;
	}
}
