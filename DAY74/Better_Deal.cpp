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
        int F= 100-A;
        int S=(100-B)*2;
        if(F>S)
        {
            cout<<"SECOND"<<endl;
        }
        else if (F==S)
        {
            cout << "BOTH" << endl;
        }
        else
        {
            cout<<"FIRST"<<endl;
        }
    }
return 0;
}