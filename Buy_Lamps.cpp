#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N,K,X,Y;
    cin>>N>>K>>X>>Y;
    cout<<(K*X)+(N-K)*(min(X,Y))<<endl;
}
return 0;
}