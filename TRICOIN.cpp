#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0,c=0,sum=0;
        cin>>n;
        /*while(n>=0)
        {
            i++;
            sum=sum+i;
            if(n>=sum)
            {
                n=n-sum;
                c++;
                cout<<n<<" "<<c<<" "<<sum<<" "<<i<<" ";
            }
        }*/
        int flag=0;
        while(flag==0)
        {
            i++;
            sum=sum+i;
            if(n>=sum)
                c++;
            else flag=1;
        }
        cout<<c<<endl;
    }
}
