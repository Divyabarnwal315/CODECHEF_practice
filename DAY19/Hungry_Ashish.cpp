#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y,Z;
    cin>>X>>Y>>Z;
    if(X>=Y)
    {
        cout<<"PIZZA"<<endl;
    }
    else if(X>=Z)
    {
        cout<<"BURGER"<<endl;
    } 
    else
    {
        cout<<"NOTHING"<<endl;
    }
}
return 0;
}