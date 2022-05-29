#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int N,X,K;
        cin>>N>>X>>K;
        cout<<min(N,K/X)<<endl;
    }
return 0;
}