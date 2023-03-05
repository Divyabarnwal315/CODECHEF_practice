#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if((10*X)<=Y)
        {
            cout<<(10*X)*Z<<endl;
        }
        else
        {
cout<<Y*Z<<endl;
        }
    }
return 0;
}