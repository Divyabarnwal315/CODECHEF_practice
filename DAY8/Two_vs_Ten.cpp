#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X;
    cin>>X;
    int x=X%2;
    int y=X%10;
    if(x==0 && y==0)
    {
        cout<<"0"<<endl;
    }
    else if(y==5)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}
return 0;
}