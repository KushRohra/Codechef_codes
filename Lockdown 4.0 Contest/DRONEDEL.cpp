#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main()
{
	
	int n, r, i, x;
	cin>>n>>r;
	set<int> s;
	s.insert(r);
	for(i=0;i<n;i++)
	{
		cin>>x;
		s.insert(x);
	}
	vector<int> diff;
	set<int>::iterator it, p;
	for(it=s.begin();it!=s.end();)
	{
		p=it;
		it++;
		if(it!=s.end())
		{
			//cout<<*it<<" "<<*p<<endl;
			diff.push_back(abs(*it-*p));
		}
		p=it;
	}
	int result=diff[0];
	for(int i=1;i<diff.size();i++)
	{
		result=gcd(diff[i], result);
		if(result==1)
			break;		
	}
	cout<<result<<endl;
}
// 3 1 5 3 11

