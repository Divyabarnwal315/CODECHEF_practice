//METHOD-1
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int N,X;
//         cin>>N>>X;
//         cout<<pow(2,X-N)<<endl;
//     }
// return 0;
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
    int N,X;
    cin>>N>>X;
    int power=pow(2,X);
    int i;
    for(int i=1;i<=N;i++)
    {
        power=power*0.5;
    }
    cout<<power<<endl;
}
return 0;
}