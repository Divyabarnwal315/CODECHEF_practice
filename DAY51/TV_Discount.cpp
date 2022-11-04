#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    int F=A-C;
    int S=B-D;
    if(F<S)
    {
        cout<<"First"<<endl;
    }
    else if(S<F)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"Any"<<endl;
    }
}
return 0;
}