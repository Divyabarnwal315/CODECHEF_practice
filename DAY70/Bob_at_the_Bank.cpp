#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        if ((Y - X) > 0)
        {
            cout << (W - (abs(Y - X) * Z)) << endl;
        }
        else
        {
            cout << (W + (abs(Y - X) * Z)) << endl;
        }
    }
    return 0;
}