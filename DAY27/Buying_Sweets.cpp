#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,X;
    cin>>N>>X;
    int arr[N];
    int sum=0;
    int minElement=INT_MAX;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
        minElement=min(arr[i],minElement);
    }
    if(sum%X >= minElement)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<sum/X<<endl;
    }
}
return 0;
}