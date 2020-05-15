#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int i,h,sum=0;
	    for(i=0;i<5;i++)
	    {
	        cin>>h;
	        sum=sum+h;
	    }
	    if(sum==0)
	        cout<<"Beginner"<<endl;
	    else if(sum==1)
	        cout<<"Junior Developer"<<endl;
	    else if(sum==2)
	        cout<<"Middle Developer"<<endl;
	    else if(sum==3)
	        cout<<"Senior Developer"<<endl;
	    else if(sum==4)
	        cout<<"Hacker"<<endl;
	    else cout<<"Jeff Dean"<<endl;
	}
}

