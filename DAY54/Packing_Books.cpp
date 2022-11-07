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
    if(Y%Z==0)
    {
        cout<<(X*(Y/Z))<<endl;
    }
    else
    {
        cout<<(X*((Y/Z)+1))<<endl;
    }
}
return 0;
}