#include <iostream>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int x1,x2,x3,y1,y2,y3,l1,l2,l3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        l1=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
        l2=((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3));
        l3=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
        if(l1+l2==l3)
            c++;
        else if(l1+l3==l2)
            c++;
        else if(l2+l3==l1)
            c++;
    }
    cout<<c<<endl;
}
