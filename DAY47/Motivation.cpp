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
    int S,R;
    int maxR=0;
    //space required hmari space se <= ho aur rating sbse jyada ho
    for (int i = 0; i < N; i++)
    {
        cin>>S>>R;
        if(S<=X && R>maxR)
        {
            maxR=R;
        }
    }
    cout<<maxR<<endl;
}
return 0;
}