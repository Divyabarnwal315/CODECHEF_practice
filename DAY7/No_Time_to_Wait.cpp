#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,H,x;
    cin>>N>>H>>x;
    int mx=0;
    for (int i = 0; i < N; i++)
    {
    int T;
    cin>>T;
    mx=max(T,mx);
    }
    if((mx+x)>=H)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
return 0;
}