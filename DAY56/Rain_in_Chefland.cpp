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
        if(X<3)
        {
            cout<<"LIGHT"<<endl;
        }
        else if((X>=3)&&(X<7))
        {
            cout<<"MODERATE"<<endl;
        }
        else if(X>=7)
        {
            cout<<"HEAVY"<<endl;
        }
    }
return 0;
}