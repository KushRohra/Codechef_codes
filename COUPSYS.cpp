#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,c,l,d,max1=0,max2=0,max3=0,p1=1000,p2=1000,p3=1000,x,y,z;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>c>>l;
			if(l==1)
			{
				cin>>x;
				if(x>=max1)
				{
					if(x>max1)
					{
						max1=x;	
						p1=c;
					}
					else
					{
						if(c<p1)
						p1=c;	
					}
				}
			}
			else if(l==2)
			{
				cin>>y;
				if(y>=max2)
				{
					if(y>max2)
					{
						max2=y;
						p2=c;
					}
					else
					{
						if(c<p2)
						p2=c;
					}
				}
			}
			else if(l==3)
			{
				cin>>z;
				if(z>=max3)
				{
					if(z>max3)
					{
						max3=z;
						p3=c;
					}
					else
					{
						if(c<p3)
						p3=c;
					}
				}
			}
		}
		cout<<max1<<" "<<p1<<endl;
		cout<<max2<<" "<<p2<<endl;
		cout<<max3<<" "<<p3<<endl;
	}
}

