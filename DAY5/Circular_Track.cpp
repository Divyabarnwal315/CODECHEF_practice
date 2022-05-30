#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,M;
    cin>>A>>B>>M;
    cout<<min(abs(B-A),abs(M-abs(B-A)))<<endl;
}
return 0;
}