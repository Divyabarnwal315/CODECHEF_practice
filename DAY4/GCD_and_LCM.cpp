#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
long long A,B;
cin>>A>>B;
long long gcd;
gcd=__gcd(A,B);
cout<<gcd<<" ";
cout<<(A*B)/gcd<<endl;
    }
return 0;
}