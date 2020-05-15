#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int max=0,a,b,c,f;
		cin>>a>>b>>c;
		if(a>b && a>c)
		{
			f=1;
			max=a;
		}
		else if(b>c && b>a)
		{
			max=b;
			f=2;
		}
		else 
		{
			max=c;
			f=3;
		}
		if(f==1)
		{
			if(b>c)
				cout<<b;
			else cout<<c;
		}
		else if(f==2)
		{
			if(a>c)	
				cout<<a;
			else cout<<c;
		}
		else
		{
			if(a>b)
				cout<<a;
			else cout<<b;
		}
		cout<<endl;
	}
} 
