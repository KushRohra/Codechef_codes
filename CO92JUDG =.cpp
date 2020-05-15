#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],b[n],sum1=0,sum2=0,max1=0,max2=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum1=sum1+a[i];
			if(a[i]>max1)
				max1=a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			sum2=sum2+b[i];
			if(b[i]>max2)
				max2=b[i];
		}
		sum1=sum1-max1;
		sum2=sum2-max2;
		if(sum1>sum2)
			cout<<"Bob"<<endl;
		else if(sum1<sum2)
			cout<<"Alice"<<endl;
		else cout<<"Draw"<<endl;
	}
}
