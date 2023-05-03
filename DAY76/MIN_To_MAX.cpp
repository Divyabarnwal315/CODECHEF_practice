#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        //sort krke dekh lenge jhn phli value min value match nhi hui length of array m usko count krke out kra denge
        if (N == 1)
        {
            cout << 0 << endl;
            break;
        }
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        int count=0;
        for (int i = 0; i < N; i++)
        {
            if(arr[i]!=arr[0])
            {
                count++;
            }
        }
        cout << count << endl;
    }
return 0;
}