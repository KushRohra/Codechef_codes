#include<iostream>
using  namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i=0,h;
		cin>>n>>k;
		while(i<n)
		{
			cin>>h;
			if(h<=k)
			{
				k=k-h;
				cout<<"1";
			}
			else cout<<"0";
			i++;
		}
		cout<<endl;
	}
}
