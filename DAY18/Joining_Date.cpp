#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   int N,K;
   cin>>N>>K;
    int change=(N/5)-(K/5);
    if(N%5==0 && N>0)
    {
        change--;
    }
    if(K%5==0)
    {
        change++;
    }
    cout<<change<<endl;
}
return 0;
}