#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A;
        cin >> A;
        int arr[A];
        for (int i = 0; i < A; i++)
        {
            cin >> arr[i];
        }
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < A; i++)
        {
            if (arr[i] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        if ((count1 % 2) == 0)
        {
            cout << "YES" << endl;
        }
        else if (count0 == A)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}