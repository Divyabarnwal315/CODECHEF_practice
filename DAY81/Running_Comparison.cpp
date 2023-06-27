#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arrA[N];
        int arrB[N];
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> arrA[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> arrB[i];
        }
        for (int i = 0; i < N; i++)
        {
            if ((arrA[i] > (2 * arrB[i])) || (arrB[i] > (2 * arrA[i])))
            {
                count++;
            }
        }
        // cout<<count<<endl;
        cout << N - count << endl;
    }
    return 0;
}