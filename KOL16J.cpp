#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,n,c[500],flag3=0,flag1=0,i,flag2=0;
		cin>>n;
		int a[n];
		for(i=0;i<500;i++)
			c[i]=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			c[a[i]-1]++;
		}
		for(i=0;i<n;i++)
		{
			if(c[i]==0)
				flag1=1;
			if(c[i]>1)
				flag2=1;
			if(flag2==1 || flag1==1)
				break;
		}
		int d=0;
		for(i=1;i<n;i++)
		{
			if(a[i]-a[i-1]==1)
				d++;
		}
		if(d==n-1)
			flag3=1;
		if(flag1==1 || flag2==1 || flag3==1)
			cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
}
