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
    if(A>=10 && B>=10 && C>=10 && A+B+C>=100)
    {
        cout<<"PASS"<<endl;
    }
    else
    {
        cout<<"FAIL"<<endl;
    }
}
return 0;
}