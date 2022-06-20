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
        string S;
        cin >> S;
        bool found = false;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'I')
            {
                cout << "INDIAN" << endl;
                found = true;
                break;
            }
            else if (S[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NOT SURE" << endl;
        }
    }
    return 0;
}