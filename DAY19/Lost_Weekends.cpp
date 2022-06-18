#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int working[5];
        int P;
        for (int i = 0; i < 5; i++)
        {
            cin >> working[i];
        }
        cin >> P;
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + working[i];
        }
        sum = P * sum;
        if (sum <= 120)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}