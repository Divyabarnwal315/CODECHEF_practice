#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X;
        cin>>X;
        if(X<=70)
        {
            cout<<"0"<<endl;
        }
        else if((X>70)&&(X<=100))
        {
            cout<<"500"<<endl;
        }
        else 
        {
            cout << "2000" << endl;
        }
    }
return 0;
}