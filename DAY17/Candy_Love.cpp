#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int C[N];
    int sum=0;
    for (int i = 0; i < N; i++)
    {
        cin>>C[i];
        sum=sum+C[i];
    }
    if(sum%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
return 0;
}