#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[31],i,j,sum=0,b[31],dead,req,q,d,day,ques;
		for(i=0;i<31;i++)
			a[i]=0;
		cin>>d;
		for(i=0;i<d;i++)
		{
			cin>>day>>ques;
			a[day-1]=ques;
		}
		for(i=0;i<31;i++)
		{
			sum=sum+a[i];
			b[i]=sum;
		}
		cin>>q;
		for(i=0;i<q;i++)
		{
			cin>>dead>>req;
			if(b[dead-1]>=req)
				cout<<"Go Camp"<<endl;
			else cout<<"Go Sleep"<<endl;
		}
	}
}

