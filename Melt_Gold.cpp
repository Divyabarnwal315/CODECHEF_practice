#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int Y,X;
        cin>>Y>>X;
        int count =0;
        while(X<Y)
        {
            count++;
            X=X+count;
        }
        cout<<count<<endl;
    }
return 0;
}