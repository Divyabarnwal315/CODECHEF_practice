#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,A;
    cin>>N>>A;
    int B=N-A;
    cout<<min(A,B)<<endl;
}
return 0;
}