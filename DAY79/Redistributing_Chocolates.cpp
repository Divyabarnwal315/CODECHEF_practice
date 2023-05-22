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
        if(X+Y+Z >=6)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // if(X==1 && Y==1 && Z==1)
        // {
        //     cout<<"NO"<<endl;
        // }
        // else if(X>=1 && Y>=1 && Z>=1)
        // {
        //     if(X==Y && Y==Z && Z==X)
        //     {
        //         cout<<"YES"<<endl;
        //     }
        //     else if (X != Y && Y != Z && Z != X)
        //     {
        //         cout<<"YES"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"NO"<<endl;
        //     }
        // }
    }
return 0;
}