#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[20],s2[20],s3[20];
		int n,c1=0,c2=0,i;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>s3;
			if(i==0)
			{
				strcpy(s1,s3);
				c1++;
			}
			else
			{
				if(strcmp(s3,s1)==0)
					c1++;
				else
				{
					c2++;
					strcpy(s2,s3);
				} 
			}
		}
		if(c1>c2)
			cout<<s1<<endl;
		else if(c2>c1)
			cout<<s2<<endl;
		else cout<<"Draw"<<endl;
	}
}
