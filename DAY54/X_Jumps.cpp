#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        cin>>X>>Y;
        if(X<Y)
        {
            cout<<X<<endl;
        }
        else
        // {
        //     if((X%Y)==0)
        // {
        //     cout<<X/Y<<endl;
        // }
            // else
            {
                cout<<(X/Y)+(X%Y)<<endl;
            }
        // }
    }
return 0;
}