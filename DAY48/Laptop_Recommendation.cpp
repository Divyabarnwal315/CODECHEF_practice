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
        int arr[N];
        int count[11]={0};
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
        }
        int maxF = 0;
        int maxEle = 0;
        for (int i = 0; i < 11; i++)
        {
            if (count[i] > maxF)
            {
                maxF = count[i];
                maxEle = i;
            }
        }
        sort(count, count + 11);
        if(count[10]==count[9])
        {
            cout<<"CONFUSED"<<endl;
        }
        else{
            cout<<maxEle<<endl;
        }
    }
    return 0;
}
//map