#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int P,Q;
    cin>>P>>Q;
    if((P+Q)%4==0 || (P+Q-1)%4==0)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }
}
return 0;
}