#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		int flag1=0,flag2=0;
		i=0;
		while(flag1==0 && i<n)
		{
			if(a[i]>b[i])
				flag1=1;
			i++;
		}
		i=0;
		while(flag2==0 && i<n)
		{
			if(a[i]>b[n-i-1])
				flag2=1;
			i++;
		}
		if(flag1==0 && flag2==0)
			cout<<"both"<<endl;
		else if(flag1==0 && flag2==1)
			cout<<"front"<<endl;
		else if(flag1==1 && flag2==0)
			cout<<"back"<<endl;
		else cout<<"none"<<endl;
	}
}

