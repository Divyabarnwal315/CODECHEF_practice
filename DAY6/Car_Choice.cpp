#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    float A,B,Y,Z;
    cin>>A>>B>>Y>>Z;
    if(Y/A < Z/B)
    {
        cout<<"-1"<<endl;
    }
    else if(Y/A == Z/B)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
}
return 0;
}