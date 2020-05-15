#include <iostream>
using namespace std;
int sum(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
        c=c+i;
    return c;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d,i;
	    cin>>d>>n;
	    for(i=0;i<d;i++)
	    {
	        n=sum(n);
	    }
	    cout<<n<<endl;
	}
}

