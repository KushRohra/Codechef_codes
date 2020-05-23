#include<bits/stdc++.h>
using namespace std;
bool isvowel(char x)
{
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
		return 1;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long int c=0;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(!isvowel(s[i]))
			{
				c=(c%1000000007 + pow(2,s.length()-i-1));
			}
		}
		cout<<c%1000000007<<endl;
	}
}
// 1 5 2 1 2 3 4 5

