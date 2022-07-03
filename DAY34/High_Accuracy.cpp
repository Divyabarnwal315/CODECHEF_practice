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
    if(X%3==0)
    {
        cout<<'0'<<endl;
    }
    else if(X%3==1)
    {
        cout<<'2'<<endl;
    }
    else
    {
        cout<<'1'<<endl;
    }
}
return 0;
}