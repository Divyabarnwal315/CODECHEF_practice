#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        if((N*X)<=99990 && (N*X)>=10000)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
return 0;
}