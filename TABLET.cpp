#include<iostream>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int b1,flag=0,max=0,h,w,a,n,i,b;
		cin>>n>>b;
		for(i=0;i<n;i++)
		{
			cin>>h>>w>>b1;
			if(b1<=b)
			{
				a=h*w;
				if(a>max)
				{
					max=a;
					flag=1;
				}
			}
		}
		if(flag==1)
			cout<<max<<endl;
		else cout<<"no tablet"<<endl;
	}
} 

