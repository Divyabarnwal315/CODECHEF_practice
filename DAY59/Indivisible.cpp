#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        int i;
        for(int i=1;i<100;i++)
        {
            if(((A%i)!=0)&&((B%i)!=0)&&((C%i)!=0))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
return 0;
}