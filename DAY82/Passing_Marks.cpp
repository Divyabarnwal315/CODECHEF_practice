#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        //N-total students,X-total pass students fir sort krke decending order me first X values leni fir usme se sbse choti value -1 krdeni h
        sort(arr,arr+N);
        cout<<arr[N-X]-1<<endl;
    }
return 0;
}