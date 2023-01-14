#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // phle string ko input me lo fir string ke length k index p jaake dekho agr khi lgatar 2 se jyada aeiou aa gya to happy else sad
        string S;
        cin >> S;
        int count = 0;
        int length = S.length();
        for (int i = 0; i < length; i++)
        {
            if (S[i] == 'a' || S[i] == 'o' || S[i] == 'e' || S[i] == 'i' || S[i] == 'u')
            {
                count++;
                if (count == 3)
                {
                    cout << "Happy" << endl;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (count != 3)
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}