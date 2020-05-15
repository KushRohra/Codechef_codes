#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,c=0,tr,dr,ts,ds;
		cin>>tr;
		int a[100];
		for(i=0;i<100;i++)
			a[i]=0;
		for(i=0;i<tr;i++)
		{
			cin>>j;
			a[j-1]=1;
		}
		cin>>dr;
		int b[100];
		for(i=0;i<100;i++)
			b[i]=0;
		for(i=0;i<dr;i++)
		{
			cin>>j;
			b[j-1]=1;
		}
		cin>>ts;
		for(i=0;i<ts;i++)
		{
			cin>>j;
			if(a[j-1]==1)
				c++;
		}
		cin>>ds;
		for(i=0;i<ds;i++)
		{
			cin>>j;
			if(b[j-1]==1)
				c++;
		}
		if(c==ts+ds)
			cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}


