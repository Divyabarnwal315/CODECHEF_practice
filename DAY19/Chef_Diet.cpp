#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,K;
    cin>>N>>K;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    bool flag=false;
    for (int i = 0; i < N; i++)
    {
        sum+=arr[i];
        sum-=K;
        if(sum<0)
        {
            cout<<"NO "<<i+1<<endl;
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        cout<<"YES"<<endl;
    }
}
return 0;
}