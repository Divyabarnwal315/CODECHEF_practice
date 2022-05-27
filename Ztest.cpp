#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r,out=0;
    cin>>n;
    while(n>0)
    {
r=n%10;
out=out+r;
n=n/10;
    }
cout<<out<<endl;
return 0;
}