#include <iostream>
using namespace std;
#include<string.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    char a[100];
	    int i,l;
	    cin>>a;
	    l=strlen(a);
	    int s=0,m=0;
	    for(i=0;i<l;i++)
	    {
	        if(a[i]=='s')
	            s++;
	        else m++;
	    }
	    for(i=0;i<l;i++)
	    {
	        if(a[i]=='s')
	        {
	            if(a[i-1]=='m' && i<l)
	            {
	                s--;
	                a[i]='f';
	                a[i-1]='f';
	            }
	            else if(a[i+1]=='m' && i<l)
	            {
	                s--;
	                a[i]='f';
	                a[i+1]='f';
	            }
	        }
	        if(a[i]=='m')
	        {
	            if(a[i-1]=='s' && i<l)
	            {
	                s--;
	                a[i-1]='f';
	                a[i]='f';
	            }
	            else if(a[i+1]=='s' && i<l)
	            {
	                s--;
	                a[i+1]='f';
	                a[i]='f';
	            }
	        }
	    }
	    if(s>m)
	        cout<<"snakes"<<endl;
	    else if(m>s)
	        cout<<"mongooses"<<endl;
	    else cout<<"tie"<<endl;
	}
}

