#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,K;
        cin>>X>>Y>>K;
        if(X==Y)
        {
            cout<<"0"<<endl;
        }
        else if(((abs(X-Y))%K)==0)
        {
            cout<<abs(X-Y)/K<<endl;
        }
        else
        {
            cout<<(((abs(X-Y))/K)+1)<<endl;
        }
    }
return 0;
}