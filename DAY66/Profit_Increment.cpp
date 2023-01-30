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
        int nsp=((X/10)+X);
        int isp=(X-Y);
        cout<<(nsp-isp)<<endl;
    }
return 0;
}