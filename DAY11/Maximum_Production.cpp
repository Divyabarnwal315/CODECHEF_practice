#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    int first=x*7;
    int second=(y*d)+(z*(7-d));
    cout<<max(first,second)<<endl;
}
return 0;
}