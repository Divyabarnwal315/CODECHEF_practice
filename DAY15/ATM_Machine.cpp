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
        if(arr[i]<=K)
        {
            cout<<1;
            K=K-arr[i];
        }
        else
        {
            cout<<0;
        }
    }
   cout<<endl; 
}
return 0;
}