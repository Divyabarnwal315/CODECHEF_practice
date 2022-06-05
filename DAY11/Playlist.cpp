#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,X;
    cin>>N>>X;
    if(N>X)
    {
        cout<<N/(3*X)<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
return 0;
}