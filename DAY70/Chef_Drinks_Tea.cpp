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
    if(X<Y)
    {
        cout<<Z<<endl;
    }
    else if(X==Y)
    {
        cout<<Z<<endl;
    }
    else
    {
        if((X%Y)==0)
        {
            cout<<(X/Y)*Z<<endl;
        }
        else
        {
            cout<<((X/Y)+1)*Z<<endl;
        }
    }
}
return 0;
}