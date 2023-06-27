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
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        //sort krne k baad while loop use kre taaki indexing check kr ske equal to nhi agr h to indexing piche se ++ hoti jaegi jbtk second largest num n mil jae
        sort(arr, arr + N);
        int index = 2;
        int i=2;
        while (arr[N - 1] == arr[N - i])
        {
            index = index + 1;
            i++;

        }
        int sum;
        sum = arr[N - 1] + arr[N - index];
        cout << sum << endl;
    }

    return 0;
}