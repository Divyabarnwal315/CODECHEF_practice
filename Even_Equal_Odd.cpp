#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        int even = 0;
        int odd = 0;
        // even=odd 0 , even>odd even-odd/2 ,odd>even odd-even/2
        vector<long long> ev;
        long long arr[2 * N];
        for (long i = 0; i < 2 * N; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
                int x = 0;
                while (arr[i] % 2 == 0)
                {
                    x++;
                    arr[i] = arr[i] / 2;
                }
                ev.push_back(x);
            }
            else
            {
                odd++;
            }
        }
        sort(ev.begin(), ev.end());
        if (even == odd)
        {
            cout << '0';
        }
        // else if(even>odd)
        // {
        //     cout<<(even-odd)/2;
        // }
        else if (odd > even)
        {
            cout << (odd - even) / 2;
        }
        else
        {
            long long diff = (even - odd) / 2;
            int ans = 0;
            for (int i = 0; i < diff; i++)
            {
                ans = ans + ev[i];
            }
            cout << ans;

            // while (diff != 0)
            // {
            //     int count = 0;
            //     for (int i = 0; i < even; i++)
            //     {
            //         if (ev[i] != 0)
            //         {
            //             ev[i] = ev[i] / 2;
            //             if (ev[i] % 2 == 1)
            //             {
            //                 count++;
            //                 ev[i]=0;
            //             }
            //         }
            //     }
            // }
        }
        cout << endl;
    }
    return 0;
}
//REVISION