#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, X;
        cin >> A >> B >> X;
        if (A == B)
        {
            cout << "YES" << endl;
        }
        else if (((max(A, B) - min(A, B)) % (2 * X)) == 0)
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