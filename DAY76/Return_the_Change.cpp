#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin >> X;
        if ((X % 10) == 0)
        {
            cout << 100 - X << endl;
        }
        else if ((X%10)>=5 && (X%10)<=9)
        {
            cout<<100-(((X/10)+1)*10)<<endl;
        }
        else 
        {
            cout<<100-((X/10)*10)<<endl;
        }
    }
    return 0;
}