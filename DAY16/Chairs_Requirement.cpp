#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y;
    cin>>X>>Y;
    if(X>=Y)
    {
        cout<<(X-Y)<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
return 0;
}