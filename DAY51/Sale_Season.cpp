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
    if(X<=100)
    {
        cout<<X<<endl;
    }
    else if(X>100 && X<=1000)
    {
        cout<<X-25<<endl;
    }
    else if (X > 1000 && X <= 5000)
    {
        cout<<X-100<<endl;
    }
    else
    {
        cout<<X-500<<endl;
    }
}
return 0;
}