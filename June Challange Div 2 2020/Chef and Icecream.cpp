#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,five=0,ten=0,f=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n && f==0;i++)
		{
			if(a[i]==5)
				five++;
			else if(a[i]==10)
			{
				if(five>=1)
				{
					ten++;
					five--;	
				}	
				else f=1;
			}	
			else if(a[i]==15)
			{
				if(ten>=1)
					ten--;
				else if(five>=2)
					five-=2;
				else f=1;
			}
			//cout<<five<<" "<<ten<<" "<<fifteen<<endl;
		}
		if(f==1)
			cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
