#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, S;
        cin >> N >> X >> S;
        for (int i = 0; i < S; i++)
        {
            int A, B;
            cin >> A >> B;
            if (A == X)
            {
                X = B;
            }
            else if (B == X)
            {
                X = A;
            }
        }
        cout << X << endl;
    }
    return 0;
}