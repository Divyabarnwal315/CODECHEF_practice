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
        cout<<"ANY"<<endl;    
        }
        else if(X<Y)
        {
        cout<<"FIRST"<<endl;    
        }
        else
        {
cout<<"SECOND"<<endl;
        }
    }
return 0;
}