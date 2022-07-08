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
    if(A>B && A>C)
    {
        cout<<"Alice"<<endl;
    }
    else if(B>C && B>A)
    {
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Charlie"<<endl;
    }
}
return 0;
}