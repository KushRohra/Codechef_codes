#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i;
		cin>>n;
		long long int a[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		for(i=0;i<n;i++)
			cout<<sum-a[i]<<" ";
		cout<<endl;
	}
}

