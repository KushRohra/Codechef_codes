#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=0,i=0,y=0,j,k;
		cin>>k;
		char s[k];
		cin>>s;
		for(j=0;j<k;j++)
		{
			if(s[j]=='I')
				i++;
			else if(s[j]=='N')
				n++;
			else y++;	
		}	
		if(i>0)
			cout<<"INDIAN";
		else if(i==0 && y>0)
			cout<<"NOT INDIAN";
		else cout<<"NOT SURE";
		cout<<endl;		
	}	
}  
