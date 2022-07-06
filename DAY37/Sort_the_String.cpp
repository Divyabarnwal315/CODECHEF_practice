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
    int count=0;
    string S;
    cin>>S;
    for (int i = 0; i < N-1; i++)
    {
        if(S[i]=='1' && S[i+1]=='0')
        {
        count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}