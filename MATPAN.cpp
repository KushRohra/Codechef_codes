#include <iostream>
using namespace std;
#include<string.h>
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int g,k,i,a[26],c[26],l;
	    for(i=0;i<26;i++)
	    {
	        cin>>a[i];
	        c[i]=0;
	    }
	    char s[50000];
	    cin>>s;
	    k=int('a');
	    l=strlen(s);
	    for(i=0;i<l;i++)
	    {
	        g=int(s[i])-k;
	        c[g]++;
	    }
	    int sum=0;
	    for(i=0;i<26;i++)
	        if(c[i]==0)
	            sum=sum+a[i];
	    cout<<sum<<endl;
	}
}

