#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X1,Y1,X2,Y2;
        cin>>X1>>Y1>>X2>>Y2;
        if(((X1*X1)+(Y1*Y1))>((X2*X2)+(Y2*Y2)))
        {
            cout<<"ALEX"<<endl;
        }
        else if (((X1 * X1) + (Y1 * Y1)) == ((X2 * X2) + (Y2 * Y2)))
        {
            cout << "EQUAL" << endl;
        }
        else
        {
            cout<<"BOB"<<endl;
        }
    }
return 0;
}