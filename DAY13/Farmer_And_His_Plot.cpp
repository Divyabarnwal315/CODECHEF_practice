#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
long long L,B;
cin>>L>>B;
//side of square = gcd
long long gcd;
gcd=__gcd(L,B);
cout<<((L*B)/(gcd*gcd))<<endl;
    }
return 0;
}