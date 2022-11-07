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
    if((((A+B)%2)!=0)  || (((B+C)%2)!=0) || (((C+A)%2)!=0))
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