#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    float A,B,X,Y;
    cin>>A>>B>>X>>Y;
    if((A/X)<(B/Y))
    {
        cout<<"Chef"<<endl;
    }
    else if((A/X)==(B/Y))
    {
        cout<<"Both"<<endl;
    }
    else
    {
        cout<<"Chefina"<<endl;
    }
}
return 0;
}