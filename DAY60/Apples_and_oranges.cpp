#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        // int A=max(M,N);
        // int B=min(M,N);
        // if(((N%2)!=0)&&((M%2)!=0))
        // {
        //     cout<<min(N,M)<<endl;
        // }
        // else if((max(N,M))%(min(N,M))==0)
        // {
        //     cout << (max(N, M)) /(min(N, M)) << endl;
        // }
        // else if((max(N, M)) % (min(N, M)) != 0)
        // {
        //     cout << (max(N, M)) /(min(N, M))+1<<endl;
        // }
        // if((A%B)==0)
        // {
        //     cout<<B<<endl;
        // }
        // else
        // {
        //     cout<<(A/B)+1<<endl;
        // }
        // int ans;
        // ans=_gcd(M,N);
        cout << __gcd(N, M) << endl;
    }
return 0;
}