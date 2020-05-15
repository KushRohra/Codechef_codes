#include<iostream>
using namespace std;
int main()
{
	int i,p,n,q;
	cin>>n>>q;
	for(i=0;i<n;i++)
	{
		cin>>p;
		if(p>=q)	
			cout<<"Good boi"<<endl;
		else cout<<"Bad boi"<<endl;
	}
}

