#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int X1,Y1,X2,Y2;
    cin>>X1>>Y1>>X2>>Y2;
    int move=(abs(X1-X2)+abs(Y1-Y2));
    if((move%2)==0)
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