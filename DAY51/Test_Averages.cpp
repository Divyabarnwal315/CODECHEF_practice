// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     int t;
//     cin>>t;
//     while(t--)
// {
//     int A,B,C;
//     cin>>A>>B>>C;
//     int F=(A+B)/2;
//     int S=(B+C)/2;
//     int T=(C+A)/2;
//     if((F>=35) && (S>=35) && (T>=35))
//     {
//         cout<<"Pass"<<endl;
//     }
//     else if ((F >= 35) && (S >= 35))
//     {
//         cout << "Pass" << endl;
//     }
//     else if ((S >= 35) && (T >= 35))
//     {
//         cout << "Pass" << endl;
//     }
//     else if((F>=35) && (T>=35))
//     {
//         cout << "Pass" << endl;
//     }
//     else
//     {
//         cout<<"Fail"<<endl;
//     }
// }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int F = (A + B) / 2;
        int S = (B + C) / 2;
        int T = (C + A) / 2;
        if ((F >= 35) && (S >= 35) && (T >= 35))
        {
            cout << "Pass" << endl;
        }
        else if ((F <= 35) && (S <= 35))
        {
            cout << "Fail" << endl;
        }
        else if ((S <= 35) && (T <= 35))
        {
            cout << "Fail" << endl;
        }
        else if ((F <= 35) && (T <= 35))
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    return 0;
}