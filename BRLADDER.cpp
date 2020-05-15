#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b,m,i,c=0;
	    cin>>n>>m;
	    if(n%2==0)
	        c++;
	    if(m%2==0)
            c++;
        if(c==2 || c==0)
        {
            if(n==m-2 || m==n-2)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else 
        {
            if(n%2==0)
            {
                i=(n-2)/2;
                b=2*i+1;
            }
            else
            {
                i=(n-1)/2;
                b=2*i+2;
            }
            if(b==m)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
	}
}

