#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,H;
        cin>>X>>Y>>H;
        //int A=X-H;
        if((X-H)%Y==0)
        {
            cout<<1+((X-H)/Y)<<endl;
        }
        else
        {
            cout<<1+(((X-H)/Y)+1)<<endl;
        }
    }
return 0;
}