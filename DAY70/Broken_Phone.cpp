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
    if(X<Y)
    {
        cout<<"REPAIR"<<endl;
    }
    else if(X>Y)
    {
        cout<<"NEW PHONE"<<endl;
    }
    else
    {
        cout<<"ANY"<<endl;
    }
}
return 0;
}