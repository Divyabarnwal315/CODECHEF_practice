#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N,M;
    cin>>N>>M;
    if(N%2==0 && M%2==0)
    {
        cout<<"0"<<endl;
    }
    else if(N%2==0 && M%2!=0)
    {
        cout<<N<<endl;
    }
    else if (N % 2 != 0 && M % 2 == 0)
    {
        cout << M << endl;
    }
    else
    {
        cout<<(N+M)-1<<endl;
    }
}
return 0;
}