#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,h;
		long long int f=1;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>h;
			f=f*h;
		}
		cout<<f<<endl;
	}
}

