#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int count=1;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    for (int i = 0; i < N-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
        count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}