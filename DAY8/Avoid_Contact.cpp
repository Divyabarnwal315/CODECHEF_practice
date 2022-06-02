#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y;
    cin>>X>>Y;
    if(X==Y)
    {
        cout<<(2*Y)-1<<endl;
    }
    else
    {
        cout<<(X+Y)<<endl;
    }
}
return 0;
}