#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[30],i=0,c=0,flag=0;
		for(i=0;i<30;i++)
		    cin>>a[i];
		 i=0;
		while(flag==0 && i<30)
		{
			if(a[i]==0)
			    c=0;
			else if(a[i]==1)
				c++;
            if(c>5)
				flag=1;
			i++;
		}
		if(flag==1)
			cout<<"#coderlifematters"<<endl;
		else cout<<"#allcodersarefun"<<endl;
	}
}
