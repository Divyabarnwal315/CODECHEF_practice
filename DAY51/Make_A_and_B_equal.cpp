// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
// agr A B se chota h to ek baar multiply kro agr<aaya B se to dubara kro aur tbtk kro jbtk >= n aa jae B se fir agr> aa gya to NO out kra do othervise YES
//         int A, B;
//         cin >> A >> B;
//         if(A==B)
//         {
//             cout<<"YES"<<endl;
//         }
//         // else if(A<B)
//         // {

//         // }
//         else if(A%2==0)
//         {
//             A=A/2;
//         }
//         else if(B%2==0)
//         {
//             B=B/2;
//         }
//         if(A==B)
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
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
        int A, B;
        cin >> A >> B;
        int chotu = min(A, B);
        int badu = max(A, B);
        do
        {
            chotu *= 2;
        } while (chotu < badu);
        if (chotu == badu)
        {
            cout << "YES" << endl;
        }
        else if(A==B)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// APPROACH 2
//  #include <iostream>
//  using namespace std;

// void solve()
// {
//     int A, B;
//     cin >> A >> B;
//     if (A < B)
//     {
//         while (A < B)
//         {
//             A *= 2;
//         }
//     }
//     else
//     {
//         while (B < A)
//         {
//             B *= 2;
//         }
//     }
//     if (A == B)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         solve();
//     }
// }
// FAALTU
