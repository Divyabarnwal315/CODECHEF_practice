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
        if(X<4)
        {
            cout<<"MILD"<<endl;
        }
        else if((X>=4)&&(X<7))
        {
            cout<<"MEDIUM"<<endl;
        }
        else
        {
            cout<<"HOT"<<endl;
        }
    }
return 0;
}