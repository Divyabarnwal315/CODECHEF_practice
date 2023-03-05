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
        if(Y<=X)
        {
            cout<<Y<<endl;
        }
        else
        {
            cout<<(X)+((Y-X)*2)<<endl;
        }
    }
return 0;
}