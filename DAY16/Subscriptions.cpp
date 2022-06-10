#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,X;
    cin>>N>>X;
    if(N<6)
    {
        cout<<X<<endl;
    }
    else if(N%6==0)
    {
        cout<<((N/6)*X)<<endl;
    }
    else
    {
        cout<<(((N/6)+1)*X)<<endl;
    }
}
return 0;
}