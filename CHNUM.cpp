#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,o=0,e=0,sum1=0,sum2=0,h;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>h;
			if(h<0)
			{
				o++;
				sum2=sum2+h;
			}
			else
			{
				e++;
				sum1=sum1+h;
			}
		}
		if(e==0)
			cout<<o<<" "<<o<<endl;
		else if(o==0)
			cout<<e<<" "<<e<<endl;
		else
		{
			if(o>e)
				cout<<o<<" "<<e;
			else cout<<e<<" "<<o;
			cout<<endl;
		}
	}
}
