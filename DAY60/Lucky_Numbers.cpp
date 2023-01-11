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
            if((S[i])=='7')
            {
                count=1;
                break;
            }
        }
        if(count==1)
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