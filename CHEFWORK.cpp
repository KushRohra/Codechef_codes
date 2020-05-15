#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,min1=999999999,min2=999999999,min3=999999999,a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	{
		if(b[i]==1 && a[i]<min1)
		{
			min1=a[i];
		}
		else if(b[i]==2 && a[i]<min2)
		{
			min2=a[i];
		}
		else if(b[i]==3 && a[i]<min3)
		{
			min3=a[i];
		}
	}
	if(min1+min2<min3)
		cout<<min1+min2<<endl;
	else cout<<min3<<endl;
}

