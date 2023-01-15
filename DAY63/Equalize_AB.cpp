#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,X;
        cin>>A>>B>>X;
        if(A==B)
        {
            cout<<"YES"<<endl;
        }
        else if(((A+X)==(B-X))||((A-X)==(B+X)))
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