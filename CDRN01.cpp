#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,c;
	    cin>>n;
	    c=n%10;
	    if(c!=0)
	        n=n+10-c;
	    if(n%100==0 || n%1000==0)
	        n=n+10;
	    cout<<n<<endl;
	}
}

