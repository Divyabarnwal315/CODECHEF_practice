#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    long long P1, P2 , K;
    cin>>P1>>P2>>K;
    if((((P1+P2)/K)%2)==0)
    {
        cout<<"CHEF"<<endl;
    }
    else
    {
        cout<<"COOK"<<endl;
    }
}
return 0;
}