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
        int ind1, indN;
        int count = 0;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                ind1 = i;
            }
            if (arr[i] == N)
            {
                indN = i;
            }
        }
        if (ind1 == 0 && indN == N - 1)
        {
            cout << 0 << endl;
        }
        else if (ind1 == 0 && indN != N - 1)
        {
            cout << N - 1 - indN << endl;
        }
        else if (ind1 != 0 && indN == N - 1)
        {
            cout << ind1 << endl;
        }
        else
        {
            count=N-1-indN+ind1;
            if(indN<ind1)
            {
                count--;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}