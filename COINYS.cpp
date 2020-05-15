#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        int i,c=0;
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
                c++;
        }
        cout<<c<<endl;
    }
}
