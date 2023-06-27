#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,A,B;
        cin>>N>>A>>B;
        int C=N/2;
        int D=(N/2)+1;
        if(N%2==0)
        {
            cout<<(A*C)+(B*C)<<endl;
        }
        else
        {
            cout<<(A*C)+(B*D)<<endl;
        }
    }
return 0;
}