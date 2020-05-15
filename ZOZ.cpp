#include<iostream>
using namespace std;
int  main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int temp,temp1,n,i,sum=0,c=0,k;
		cin>>n>>k;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		for(i=0;i<n;i++)
		{
			temp=sum-a[i];
			temp1=a[i]+k;
			if(temp1>temp)
				c++;
		}
		cout<<c<<endl;
	}
}

