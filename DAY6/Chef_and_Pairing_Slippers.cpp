#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,L,X;
    cin>>N>>L>>X;
    cout<<(min(L,(N-L)))*X<<endl;
}
return 0;
}