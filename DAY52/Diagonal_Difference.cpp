#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    //     int t;
    //     cin>>t;
    //     while(t--)
    // {

    // }
    int matrix[100][100];
    int i;
    cin >> i;
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < i; y++)
        {
            cin >> matrix[x][y];
        }
    }
    int diagonal1, diagonal2;
    diagonal1 = 0;
    diagonal2 = 0;
    for (int x = 0; x < i; x++)
    {
        diagonal1 += matrix[x][x];
    }
    for (int x = i - 1; x > -1; x--)
    {
        diagonal2 += matrix[i - x - 1][x];
    }
    int difference = diagonal1 - diagonal2;
    if (difference < 0)
    {
        cout << abs(difference);
    }
    else
    {
        cout << difference;
    }
    return 0;
}