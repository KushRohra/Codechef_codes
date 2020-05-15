#include<iostream>
using namespace std;
int main()
{
	int n,k,i;
	cin>>n>>k;
	int a[n],min=9999999;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<min)	
			min=a[i];
	}
	cout<<k-min<<endl;
}

