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
        if(N>=1 && N<=10)
        {
            cout<<"Lower Double"<<endl;
        }
        else if(N>=11 && N<=15)
        {
            cout<<"Lower Single"<<endl;
        }
        else if(N>=16 && N<=25)
        {
            cout<<"Upper Double"<<endl;
        }
        else
        {
            cout<<"Upper Single"<<endl;
        }
    }
return 0;
}