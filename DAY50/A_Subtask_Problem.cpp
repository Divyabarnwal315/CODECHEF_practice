#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;
        cin >> N >> M >> K;
        int count1 = 0;
        int count2 = 0;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == 1)
            {
                count1++;
            }
        }
        if (count1 == N)
        {
            cout << "100" << endl;
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (arr[i] == 1)
                {
                    count2++;
                }
                else
                {
                    break;
                }
                }
                if (count2 >= M)
                {
                    cout << K << endl;
                }
                else
                {
                    cout << "0" << endl;
                }
            }
        }
        return 0;
    }