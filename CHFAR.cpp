#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int t;
	cin>>t;
	while(t--)	
	{
		int n,k,i,h,c=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>h;
			if(h!=1)
				c++;
		}
		if(c<=k)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

