#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int X1,X2,Y1,Y2;
    cin>>X1>>X2>>Y1>>Y2;
    cout<<min((X1+X2),(Y1+Y2))<<endl;
}
return 0;
}