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
        int count = 0;
        int side;
        while (N >= 1)
        {
            side = sqrt(N);
            N = N - (side * side);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}