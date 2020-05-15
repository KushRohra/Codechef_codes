#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int j,i,e=0,o=0;
		for(i=0;i<n;i++)
		{
			cin>>j;
			if(j%2==0)
				e++;	
		}	
		o=n-e;
		if(e>o)
			cout<<"READY FOR BATTLE";
		else cout<<"NOT READY";
		cout<<endl;
	
}
