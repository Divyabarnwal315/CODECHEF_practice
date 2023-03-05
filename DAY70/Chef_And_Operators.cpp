#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    if(A>B)
    {
        cout<<">"<<endl;
    }
    else if(A==B)
    {
        cout<<"="<<endl;
    }
    else
    {
        cout<<"<"<<endl;
    }
}
return 0;
}