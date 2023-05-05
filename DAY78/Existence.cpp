#include <bits/stdc++.h>
#include<cmath>
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
        // int A = pow(X, 4);
        // int B = 4 * (pow(Y, 2));
        // int C = (4 * (pow(X, 2)))*Y;
        int A= X*X*X*X;
        int B=4*Y*Y;
        int C=4*X*X*Y;
        if ((A + B) == C )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}