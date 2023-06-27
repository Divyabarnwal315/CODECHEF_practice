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
        if(((A*B)<0)||((B*C)<0)||((C*A)<0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        // if((A<0 && B<0)||(B<0 && C<0)||(C<0 && A<0))
        // {
        //     cout<<"NO"<<endl;
        // }
        // else if ((A > 0 && B > 0) || (B > 0 && C > 0) || (C > 0 && A > 0))
        // {
        //     cout << "NO" << endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
    }
return 0;
}