#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[101] = {0};
        for (int i = 0; i < N; i++)
        {
            int X;
            cin >> X;
            arr[X]++;
        }
        int count = 0;
        for (int i = 0; i < 101; i++)
        {
            count = max(arr[i], count);
        }
        cout << N - count << endl;
    }
    return 0;
}
