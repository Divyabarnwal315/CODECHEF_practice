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
        int pos;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int K;
        cin >> K;
        pos = arr[K - 1];
        sort(arr, arr + N);
        /*
        initial jo arr tha usme jo k position p value thi vo after sortin koun se position p h mtlb index+1
          */
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == pos)
            {
                cout << j + 1 << endl;
            }
        }
    }
    return 0;
}