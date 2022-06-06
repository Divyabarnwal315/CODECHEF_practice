#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int H,x,y,C;
    cin>>H>>x>>y>>C;
    int require = x+(y/2);
    int consumption= (H*require);
    if(consumption<=C)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
return 0;
}