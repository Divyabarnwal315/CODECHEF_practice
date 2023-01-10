//METHOD 1 (DOUBT)

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
//         string S1;
//         cin >> S1;
//         int broke = (N / 2);
//         int count = 0;
//         for (int i = 0; i < broke;i++)
//         {
//             if(S1[i]==S1[i+broke])
//             {
//                 count=1;
//             }
//             else
//             {
//                 count=0;
//             }
//         }
//         if(count==1)
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


//METHOD-2
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
        cin>>N;
        string S;
        cin>>S;
        // string ka koi hissa lene k liye substring use krte
        // https://www.geeksforgeeks.org/substring-in-cpp/
        string S1=S.substr(0,N/2);
        string S2=S.substr(N/2,N);
        if(S1==S2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}