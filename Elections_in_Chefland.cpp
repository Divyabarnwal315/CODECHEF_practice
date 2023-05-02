#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long count=0;
        long long N,X,i;
        cin>>N>>X;
        long long arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        if(arr[i]>=X)
        {
            count++;
        }
        }
        cout<<count<<endl;
    }
return 0;
}