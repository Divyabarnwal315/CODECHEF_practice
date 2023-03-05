#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int W,X,Y,Z;
    cin>>W>>X>>Y>>Z;
    if(X==W || Y==W || Z==W || X+Y==W || Y+Z==W || Z+X==W || X+Y+Z==W)
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