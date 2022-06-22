#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi pwr;
    int t;
    cin >> t;
    pwr.pb(1);
    for (int i = 0; i < 1000010; i++)
    {
        int x = pwr[pwr.size() - 1] * 2;
        x = x % 1000000007;
        pwr.pb(x);
    }
    while (t--)
    {
        long long N, X;
        cin >> N >> X;
        cout << (pwr[N - 1] * X) % 1000000007 << endl;
    }
    return 0;
}