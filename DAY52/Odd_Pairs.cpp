#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    if(N%2==0)
    {
        cout<<(N/2)*N<<endl;
    }
    else
    {
        cout << ((N / 2) * (N+1)) << endl;
    }
}
return 0;
}