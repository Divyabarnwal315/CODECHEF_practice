#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float N, M;
        cin >> N >> M;
        float off = 0.9*N;
        if (off > M)
        {
            cout << "DINING" << endl;
        }
        else if (M > off)
        {
            cout << "ONLINE" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }
    return 0;
}