#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X;
        cin>>X;
        if(X<=3)
        {
            cout<<"BRONZE"<<endl;
        }
        else if(X>3 && X<=6)
        {
            cout<<"SILVER"<<endl;
        }
        else
        {
            cout<<"GOLD"<<endl;
        }
    }
return 0;
}