#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        if (Y >= X)
        {
            cout << Y - X << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}