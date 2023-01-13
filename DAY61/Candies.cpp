#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, count = 0;
        cin >> N;
        int arr[2 * N];
        for (int i = 0; i < (2 * N); i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < (2 * N) - 1; i++)
        {
            count = 0;
            for (int j = i; j < (2 * N); j++)
                if (arr[i] == arr[j])
                {
                    count++;
                }
                if (count == 3)
                {
                    cout << "No" << endl;
                    break;
                }
        }
                if (count < 3)
                {
                    cout << "Yes" << endl;
                }
    }
    return 0;
}