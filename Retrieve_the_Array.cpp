#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    long long N;
    cin>>N;
    long long arr[N];
    long long sum=0;
    for (long long i = 0; i < N; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    //sbke sum ko N+1 divide krdiya fir jo bhi X value aayi usko  divide krke likh diya output m
    sum=sum/(N+1);
    for (long long i = 0; i < N; i++)
    {
        cout<<arr[i]-sum<<" ";
    }
    cout<<endl;
}
return 0;
}