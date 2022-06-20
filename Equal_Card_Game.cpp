#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int K;
        cin >> K;
        //int divide=52/K;
        //int discard=(divide*K);
        //cout<<52-discard<<endl;
        cout<<52%K<<endl;
    }
    return 0;
}