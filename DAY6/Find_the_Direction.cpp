#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X;
    cin>>X;
    if(X%4==1)
    {
        cout<<"East"<<endl;
    }
    else if(X%4==2)
    {
        cout<<"South"<<endl;
    }
    else if(X%4==3)
    {
        cout<<"West"<<endl;
    }
    else
    {
        cout<<"North"<<endl;
    }
}
return 0;
}