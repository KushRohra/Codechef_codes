#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0;
		cin>>n;
		while(n!=0)
		{
			c=c+(n%10);
			n=n/10;
		}
		cout<<c<<endl;
	}
} 
