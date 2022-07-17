#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    string A;
    cin>>A;
    string ODD="";
    string EVEN="";
    for (int i = 0; i < N; i++)
    {
        if(i%2==0)
        {
            EVEN+=A[i];
        }
        else{
            ODD+=A[i];
        }
    }
    int count=0;
    sort(EVEN.begin(),EVEN.end());
    sort(ODD.begin(), ODD.end());
        if(ODD==EVEN)
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