#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int N,K;
    cin>>N>>K;
    int arr[N];
    int sum=0;
    int add=0;
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    for(int i=0;i<N;i++)
    {
        add=arr[i]+K;
        if(add>(sum-arr[i]))
        {
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}