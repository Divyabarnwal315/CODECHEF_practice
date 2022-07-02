#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int P;
    cin>>P;
    int P1=P/100;
    int P2=P%100;
    if((P1+P2)>10) 
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<P1+P2<<endl;
    }
}
return 0;
}