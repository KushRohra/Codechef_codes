#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,a,b;
		float p;
		cin>>n>>a>>b;
		int a1[n],max=0;
		for(i=0;i<n;i++)
		{
			cin>>a1[i];
			if(a1[i]>max)
				max=a1[i];
		}
		int b1[max],t;
		for(i=0;i<max;i++)
			b1[i]=0;
		for(i=0;i<n;i++)
		{
			t=a1[i];
			b1[t-1]++;
		}
		p=b1[a-1]*b1[b-1];
		n=n*n;
		p=p/n;
		cout<<p<<endl;
	}
}
