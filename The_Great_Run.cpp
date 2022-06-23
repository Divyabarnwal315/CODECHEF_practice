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
    int Sum=0;
    int M=-1;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N-K; i++)
    {
       Sum=0;
    for (int j = 1; j < i+K; j++)
    {
        Sum=Sum+arr[j];
    }
    M=max(M,Sum);
    }
    cout<<M<<endl;
}
return 0;
}