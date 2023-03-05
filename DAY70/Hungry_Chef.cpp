#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int X,Y,N,R;
    cin>>X>>Y>>N>>R;
    int ans=((R-(Y*N))/(X-Y));
    if((R/Y)>=N)
    {
        cout<<0<<" "<<N<<endl;
    }
    else if((R/X)<=N)
    {
        cout<<-1<<endl;
    }
    else
    {
        if (((R - (Y * N)) % (X - Y))!=0)
            ans=ans+1;
        cout<<ans<<" "<<N-ans<<endl;
    }
}
return 0;
}