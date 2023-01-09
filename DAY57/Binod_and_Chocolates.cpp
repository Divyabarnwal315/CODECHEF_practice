#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        if ((((A + B) % 3) == 0)||((A%3)==0)||((B%3)==0))
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