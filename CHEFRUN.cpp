#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x1,x2,x3,v1,v2;
		float t1,t2;
		cin>>x1>>x2>>x3>>v1>>v2;
		t1=x3-x1;
		t1=t1/v1;
		t2=x2-x3;
		t2=t2/v2;
		if(t1<t2)
			cout<<"Chef"<<endl;
		else if(t1>t2)
			cout<<"Kefa"<<endl;
		else cout<<"Draw"<<endl;
	}
}

