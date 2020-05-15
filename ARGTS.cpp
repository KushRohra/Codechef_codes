#include<iostream>
using namespace std;
int main()
{
	long long int t,k;
	cin>>t>>k;
	while(t--)
	{
		long long int f,sum=0,n,i;
		cin>>n;		
		for(i=0;i<n;i++)
		{
			cin>>f;
			sum=sum+f;
		}
		if(sum<k)
			cout<<"SUCCESS"<<endl;
		else cout<<"FAILURE"<<endl;
	}
}

