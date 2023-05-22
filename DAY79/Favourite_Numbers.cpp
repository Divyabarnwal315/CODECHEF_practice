#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A;
        cin>>A;
        if(A%7==0 && A%2==0)
        {
            cout<<"Alice"<<endl;
        }
        else if(A%9==0 && A%2!=0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Charlie"<<endl;
        }
    }
return 0;
}