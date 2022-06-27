#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N, temp1, temp2;
        cin >> N;
        int sum = 0;
        temp1 = N;
        temp2 = N+1;
        int sum2=0;
        while (temp1 != 0)
        {
            sum = sum + (temp1 % 10);
            temp1 = temp1/ 10;
        }
        while (temp2 != 0)
        {
            sum2 = sum2 + (temp2 % 10);
            temp2 = temp2 / 10;
        }
        if(sum%2==sum2%2)
        {
            cout<<N+2<<endl;
        }
        else
        {
            cout<<N+1<<endl;
        }
    }
    return 0;
}