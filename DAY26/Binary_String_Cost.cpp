#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;
        string S;
        cin >> S;
        //METHOD-3
        sort(S.begin(), S.end());
        if (S[0]=='1' || S[N-1]=='0')
        {
            cout << 0<< endl;
        }
        else
        {
            cout << min(X, Y) << endl;
        }
        // int count0 = 0;
        // int count1 = 0;
        // for (int i = 0; i < N; i++)
        // {
        //     if (S[i] == '1')
        //     {
        //         count1++;
        //     }
        //     else if (S[i] == '0')
        //     {
        //         count0++;
        //     }
        // }
        // 10 7 8
        // 0000011111 4 5 7 10 5 1001001 1110000
        // METHOD-1
        // if(count1!=N && count0!=N)
        // {
        //     cout << min(X, Y)<<endl;
        // }
        // else
        // {
        //     cout<<0<<endl;
        // }
        //METHOD-2
        // if (X > Y)
        // {
        //     sort(S.begin(), S.end(), greater<char>());
        //     if (count0 == 0 || count1 == 0)
        //     {
        //         cout << 0 << endl;
        //     }
        //     else
        //     {
        //         cout << Y << endl;
        //     }
        // }
        // else 
        // {
        //     sort(S.begin(), S.end());
        //     if (count0 == 0 || count1 == 0)
        //     {
        //         cout << 0 << endl;
        //     }
        //     else
        //     {
        //         cout << X << endl;
        //     }
        // }
        
    }
    return 0;
}
