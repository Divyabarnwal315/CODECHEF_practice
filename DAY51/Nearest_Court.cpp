#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int X,Y;
    cin>>X>>Y;
    int diff=abs(X-Y);
    if(abs((X-Y))==1)
    {
        cout<<"1"<<endl;
    }
    else if((diff%2)==0)
    {
        cout<<diff/2<<endl;
    }
    else
    {
        cout<<(diff/2)+1<<endl;
    }
}
return 0;
}