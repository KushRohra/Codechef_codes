#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int c=0,s=0,i;
		char a[n];
		cin>>a;
		for(i=0;i<n;i++)
		{
			if(int(a[i])>=65 && int(a[i])<=90)
				c++;
			else s++;
		}
		if(k>=c && k>=s)
			cout<<"both"<<endl;
		else if(c==n || s==0)
			cout<<"brother"<<endl;
		else if(s==n || c==0)
			cout<<"chef"<<endl;
		else if(k>=s)
			cout<<"brother"<<endl;
		else if(k>=c)
			cout<<"chef"<<endl;
		else cout<<"none"<<endl;
	}
}

