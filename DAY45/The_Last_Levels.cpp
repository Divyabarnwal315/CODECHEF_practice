#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int X,Y,Z;
    cin>>X>>Y>>Z;
    int D=X/3;
    int R=X%3;
    int ans=(((X/3)*Z)+(X*Y));
    if(X<=3)
    {
        cout<<(X*Y)<<endl;
    }
    else if((X%3)!=0)
    {
        //cout<<((D*(3*Y))+(D*Z)+(R*Y))<<endl;
        cout<<ans<<endl;
    }
    else
    {
        //cout<<(((D*(3*Y))+(D*Z))-Z)<<endl;
        cout<<ans-Z<<endl;
    }
}
return 0;
}