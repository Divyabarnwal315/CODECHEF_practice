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
        string str;
        int s = 0;
        int l = 0;
        while (N--)
        {
            cin >> str;
            if (str == "START38")
                s ++;
            else
                l ++;
        }
        cout << s << " " << l << endl;
    }
    return 0;
}