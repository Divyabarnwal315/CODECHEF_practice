#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    string S;
    cin>>S;
    int count=0;
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i]=='A' || S[i]=='D' || S[i]=='O' || S[i]=='P' || S[i]=='Q' || S[i]=='R')
        {
            count++;
        }
        else if(S[i]=='B')
        {
            count=count+2;
        }
    }
    cout<<count<<endl;
}
return 0;
}