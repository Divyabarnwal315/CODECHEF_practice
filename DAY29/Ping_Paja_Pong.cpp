#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y,K;
    cin>>X>>Y>>K;
    int serve=(X+Y)/K;
    if(serve%2==0)
    {
        cout<<"Chef"<<endl;
    }
    else
    {
        cout<<"Paja"<<endl;
    }
}
return 0;
}