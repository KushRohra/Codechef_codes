#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=2,n,min,d,s;
		cin>>n;
		min=n-1;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				s=n/i;
				d=i-s;
				if(d<0)
					d=-d;
				if(d<min)
					min=d;
			}
		}
		cout<<min<<endl;
	}
}
