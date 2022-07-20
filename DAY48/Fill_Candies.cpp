#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N,K,M;
    cin>>N>>K>>M;
    if((N%(K*M))==0)
    {
        cout<<(N/(K*M))<<endl;
    }
    else
    {
        cout << (N / (K * M))+1<<endl;
    }
}
return 0;
}