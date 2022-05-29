#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y;
    cin>>X>>Y;
    if(Y%X==0)
    {
        cout<<(Y/X)-1<<endl;
    }
    else
    {
        cout<<Y/X<<endl;
    }
}
return 0;
}