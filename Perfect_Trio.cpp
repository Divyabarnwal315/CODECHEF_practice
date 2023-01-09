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
        if(((X+Y)==Z) ||((Y+Z)==X)||((Z+X)==Y))
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