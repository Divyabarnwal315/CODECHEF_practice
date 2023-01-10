
// {M-1}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int N;
//         cin >> N;
//         // length dekhenge as a integer iff i aur i+1 same hua to count =1 krte jaenge fir count ki value out kradenge
//         string S;
//         cin >> S;
//         int count = 0;
//         for (int i = 1; i < N; i++)
//         {
//             //i-1 isliye hoga aur i+1 isliye nhi hoga qki phle kisi position p jaenge to uske phle vale se check krenge same h ya nhi
//             if (S[i] == S[i - 1])
//             {
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }



// (M-2)
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        // length dekhenge as a integer iff i aur i+1 same hua to count =1 krte jaenge fir count ki value out kradenge
        string S;
        cin >> S;
        int count = 0;
        for (int i = 0; i < N - 1; i++)
        {
            // DD
            // i-1 isliye hoga aur i+1 isliye nhi hoga qki phle kisi position p jaenge to uske phle vale se check krenge same h ya nhi
            if (S[i] == S[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}