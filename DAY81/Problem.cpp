#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  N,M;
        cin>>N>>M;
        if(N%2==0 && M%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(N%2==1 && M%2==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // if(N==M)
        // {
        //     cout<<"YES"<<endl;
        // }
        // else if(N>M)
        // {
        //     if(N-1==M+1)
        //     {
        //         cout<<"YES"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else
        // {
        //     if(M-1==N+3)
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