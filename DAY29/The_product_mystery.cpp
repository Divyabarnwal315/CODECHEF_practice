#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int B,C;
    cin>>B>>C;
    cout<<C/__gcd(B,C)<<endl;
}
return 0;
}