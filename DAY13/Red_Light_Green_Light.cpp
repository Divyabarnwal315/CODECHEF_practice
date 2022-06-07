#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,K;
    cin>>N>>K;
    int count=0;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
       if(arr[i]>K)
       {
           count++;
       }
    }
    cout<<count<<endl;
}
return 0;
}