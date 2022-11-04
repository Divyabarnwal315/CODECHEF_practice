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
    if(A==B)
    {
        cout<<"Yes"<<endl;
    }
    else if((abs(A-B))%2==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
return 0;
}