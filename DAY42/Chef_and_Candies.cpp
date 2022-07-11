#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N,X;
    cin>>N>>X;
    if((N-X)%4==0 && N>X)
    {
        cout<<(N-X)/4<<endl;
    }
    else if((N-X)%4!=0 && N>X)
    {
        cout<<((N-X)/4)+1<<endl;
    }
    else if(N<=X)
    {
        cout<<'0'<<endl;
    }
}
return 0;
}