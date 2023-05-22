#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int P,Q,R,S;
        cin>>P>>Q>>R>>S;
        int A=max(max(R,max(P,Q)),S);
        int B=P+Q+R+S;
        if(A>(B-A))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
return 0;
}