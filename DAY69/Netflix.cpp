#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C,X;
        cin>>A>>B>>C>>X;
        if (((A + B) >= X) || ((B + C) >= X) || ((C + A) >= X))
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