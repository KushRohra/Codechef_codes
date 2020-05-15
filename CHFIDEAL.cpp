#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int x,y,z;
	{
		x=rand()%3;
		x++;
		cout<<x<<endl;
		cin>>y;
		if(x+y==3)
			cout<<"3"<<endl;
		else if(x+y==4)
			cout<<"2"<<endl;
		else if(x+y==5)
			cout<<"1"<<endl;
	}
}

